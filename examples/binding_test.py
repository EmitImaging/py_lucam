import lucam
import cv2
import numpy as np

def show_image(title, image):
    cv2.namedWindow(title, cv2.WINDOW_NORMAL)
    cv2.resizeWindow(title, 800, 600)
    cv2.imshow(title, image)
    cv2.waitKey(0)

def get_last_error():
    code = lucam.GetLastError()
    return lucam.ErrorCodes(code)

def test_snapshot():
    try:
        # Get the number of connected camera
        numCams = lucam.NumCameras()
        print("Number of cameras:", numCams)

        # Enumerate the list of connected camera
        camList = lucam.EnumCameras(numCams)
        print("First camera serial's number:", camList[0].serialnumber)

        # Open the first camera
        camIndex = 1
        camHandle = lucam.CameraOpen(camIndex)

        # Get Camera format
        format, frame_rate = lucam.GetFormat(camHandle);
        frame_size = format.width * format.height; # in bytes
        format.pixel_format = 0 # 8 bits depth
        print("Camera frame info:", format.width, "x", format.height, frame_size)
        
        # Set the Snapshot settings
        snapshot_settings = lucam.LUCAM_SNAPSHOT()
        snapshot_settings.format = format
        snapshot_settings.exposure = 100
        snapshot_settings.gain = 0
        snapshot_settings.timeout = 1000
        snapshot_settings.useStrobe = False
        snapshot_settings.useHwTrigger = False

        # Grab the camera buffer and convert reshape it into a usable OpenCV image
        out_buffer = lucam.TakeSnapshot(camHandle, snapshot_settings, frame_size)
        image = out_buffer.reshape((format.height, format.width, 1))

        # Display it
        show_image("snapshot", image)
    except Exception as e:
        print("Caught exception", str(e))
        print(get_last_error())

    finally:
        # Close camera connection
        lucam.CameraClose(camHandle)

test_snapshot()