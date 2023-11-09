/*
    Copyright (c) 2023, Emit Imaging
    All rights reserved.
    This source code is licensed under the BSD-style license found in the
    LICENSE file in the root directory of this source tree. 
*/

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>
#include "lucamapi.h"
#include "error_codes.h"
#include "enum_defines.h"

namespace py = pybind11;

PYBIND11_MODULE(lucam, m) {

    py::object enum_module = py::module_::import("enum");
    py::enum_<LucamErrorCode>(m, "ErrorCodes")
        .value("NoError", LucamErrorCode::NoError)
        .value("NoSuchIndex", LucamErrorCode::NoSuchIndex)
        .value("SnapshotNotSupported", LucamErrorCode::SnapshotNotSupported)
        .value("InvalidPixelFormat", LucamErrorCode::InvalidPixelFormat)
        .value("SubsamplingZero", LucamErrorCode::SubsamplingZero)
        .value("Busy", LucamErrorCode::Busy)
        .value("FailedToSetSubsampling", LucamErrorCode::FailedToSetSubsampling)
        .value("FailedToSetStartPosition", LucamErrorCode::FailedToSetStartPosition)
        .value("PixelFormatNotSupported", LucamErrorCode::PixelFormatNotSupported)
        .value("InvalidFrameFormat", LucamErrorCode::InvalidFrameFormat)
        .value("PreparationFailed", LucamErrorCode::PreparationFailed)
        .value("CannotRun", LucamErrorCode::CannotRun)
        .value("NoTriggerControl", LucamErrorCode::NoTriggerControl)
        .value("NoPin", LucamErrorCode::NoPin)
        .value("NotRunning", LucamErrorCode::NotRunning)
        .value("TriggerFailed", LucamErrorCode::TriggerFailed)
        .value("CannotSetupFrameFormat", LucamErrorCode::CannotSetupFrameFormat)
        .value("DirectShowInitError", LucamErrorCode::DirectShowInitError)
        .value("CameraNotFound", LucamErrorCode::CameraNotFound)
        .value("Timeout", LucamErrorCode::Timeout)
        .value("PropertyUnknown", LucamErrorCode::PropertyUnknown)
        .value("PropertyUnsupported", LucamErrorCode::PropertyUnsupported)
        .value("PropertyAccessFailed", LucamErrorCode::PropertyAccessFailed)
        .value("LucustomNotFound", LucamErrorCode::LucustomNotFound)
        .value("PreviewNotRunning", LucamErrorCode::PreviewNotRunning)
        .value("LutfNotLoaded", LucamErrorCode::LutfNotLoaded)
        .value("DirectShowError", LucamErrorCode::DirectShowError)
        .value("NoMoreCallbacks", LucamErrorCode::NoMoreCallbacks)
        .value("UndeterminedFrameFormat", LucamErrorCode::UndeterminedFrameFormat)
        .value("InvalidParameter", LucamErrorCode::InvalidParameter)
        .value("NotEnoughResources", LucamErrorCode::NotEnoughResources)
        .value("NoSuchConversion", LucamErrorCode::NoSuchConversion)
        .value("ParameterNotWithinBoundaries", LucamErrorCode::ParameterNotWithinBoundaries)
        .value("BadFileIo", LucamErrorCode::BadFileIo)
        .value("GdiplusNotFound", LucamErrorCode::GdiplusNotFound)
        .value("GdiplusError", LucamErrorCode::GdiplusError)
        .value("UnknownFormatType", LucamErrorCode::UnknownFormatType)
        .value("FailedCreateDisplay", LucamErrorCode::FailedCreateDisplay)
        .value("DpLibNotFound", LucamErrorCode::DpLibNotFound)
        .value("DpCmdNotSupported", LucamErrorCode::DpCmdNotSupported)
        .value("DpCmdUnknown", LucamErrorCode::DpCmdUnknown)
        .value("NotWhilePaused", LucamErrorCode::NotWhilePaused)
        .value("CaptureFailed", LucamErrorCode::CaptureFailed)
        .value("DpError", LucamErrorCode::DpError)
        .value("NoSuchFrameRate", LucamErrorCode::NoSuchFrameRate)
        .value("InvalidTarget", LucamErrorCode::InvalidTarget)
        .value("FrameTooDark", LucamErrorCode::FrameTooDark)
        .value("KsPropertySetNotFound", LucamErrorCode::KsPropertySetNotFound)
        .value("Cancelled", LucamErrorCode::Cancelled)
        .value("KsControlNotSupported", LucamErrorCode::KsControlNotSupported)
        .value("EventNotSupported", LucamErrorCode::EventNotSupported)
        .value("NoPreview", LucamErrorCode::NoPreview)
        .value("SetPositionFailed", LucamErrorCode::SetPositionFailed)
        .value("NoFrameRateList", LucamErrorCode::NoFrameRateList)
        .value("FrameRateInconsistent", LucamErrorCode::FrameRateInconsistent)
        .value("CameraNotConfiguredForCmd", LucamErrorCode::CameraNotConfiguredForCmd)
        .value("GraphNotReady", LucamErrorCode::GraphNotReady)
        .value("CallbackSetupError", LucamErrorCode::CallbackSetupError)
        .value("InvalidTriggerMode", LucamErrorCode::InvalidTriggerMode)
        .value("NotFound", LucamErrorCode::NotFound)
        .value("PermanentBufferNotSupported", LucamErrorCode::PermanentBufferNotSupported)
        .value("EepromWriteFailed", LucamErrorCode::EepromWriteFailed)
        .value("UnknownFileType", LucamErrorCode::UnknownFileType)
        .value("EventIdNotSupported", LucamErrorCode::EventIdNotSupported)
        .value("EepromCorrupted", LucamErrorCode::EepromCorrupted)
        .value("SectionTooBig", LucamErrorCode::SectionTooBig)
        .value("FrameTooBright", LucamErrorCode::FrameTooBright)
        .value("NoCorrectionMatrix", LucamErrorCode::NoCorrectionMatrix)
        .value("UnknownCameraModel", LucamErrorCode::UnknownCameraModel)
        .value("ApiTooOld", LucamErrorCode::ApiTooOld)
        .value("SaturationZero", LucamErrorCode::SaturationZero)
        .value("AlreadyInitialised", LucamErrorCode::AlreadyInitialised)
        .value("SameInputAndOutputFile", LucamErrorCode::SameInputAndOutputFile)
        .value("FileConversionFailed", LucamErrorCode::FileConversionFailed)
        .value("FileAlreadyConverted", LucamErrorCode::FileAlreadyConverted)
        .value("PropertyPageNotSupported", LucamErrorCode::PropertyPageNotSupported)
        .value("PropertyPageCreationFailed", LucamErrorCode::PropertyPageCreationFailed)
        .value("DirectShowFilterNotInstalled", LucamErrorCode::DirectShowFilterNotInstalled)
        .value("IndividualLutNotAvailable", LucamErrorCode::IndividualLutNotAvailable)
        .value("UnexpectedError", LucamErrorCode::UnexpectedError)
        .value("StreamingStopped", LucamErrorCode::StreamingStopped)
        .value("MustBeInSwTriggerMode", LucamErrorCode::MustBeInSwTriggerMode)
        .value("TargetFlaky", LucamErrorCode::TargetFlaky)
        .value("AutoLensUninitialized", LucamErrorCode::AutoLensUninitialized)
        .value("LensNotInstalled", LucamErrorCode::LensNotInstalled)
        .value("UnknownError", LucamErrorCode::UnknownError)
        .value("FocusNoFeedbackError", LucamErrorCode::FocusNoFeedbackError)
        .value("LutfTooOld", LucamErrorCode::LutfTooOld)
        .value("UnknownAviFormat", LucamErrorCode::UnknownAviFormat)
        .value("UnknownAviType", LucamErrorCode::UnknownAviType)
        .value("InvalidAviConversion", LucamErrorCode::InvalidAviConversion)
        .value("SeekFailed", LucamErrorCode::SeekFailed)
        .value("AviRunning", LucamErrorCode::AviRunning)
        .value("CameraAlreadyOpened", LucamErrorCode::CameraAlreadyOpened)
        .value("NoSubsampledHighRes", LucamErrorCode::NoSubsampledHighRes)
        .value("OnlyOnMonochrome", LucamErrorCode::OnlyOnMonochrome)
        .value("No8bppTo48bpp", LucamErrorCode::No8bppTo48bpp)
        .value("Lut8Obsolete", LucamErrorCode::Lut8Obsolete)
        .value("FunctionNotSupported", LucamErrorCode::FunctionNotSupported)
        .value("RetryLimitReached", LucamErrorCode::RetryLimitReached)
        .value("LgDeviceError", LucamErrorCode::LgDeviceError)
        .value("InvalidIpConfiguration", LucamErrorCode::InvalidIpConfiguration)
        .value("InvalidLicense", LucamErrorCode::InvalidLicense)
        .value("NoSystemEnumerator", LucamErrorCode::NoSystemEnumerator)
        .value("BusEnumeratorNotInstalled", LucamErrorCode::BusEnumeratorNotInstalled)
        .value("UnknownExternInterface", LucamErrorCode::UnknownExternInterface)
        .value("InterfaceDriverNotInstalled", LucamErrorCode::InterfaceDriverNotInstalled)
        .value("CameraDriverNotInstalled", LucamErrorCode::CameraDriverNotInstalled)
        .value("CameraDriverInstallInProgress", LucamErrorCode::CameraDriverInstallInProgress)
        .value("LucamapiDotDllNotFound", LucamErrorCode::LucamapiDotDllNotFound)
        .value("LucamapiProcedureNotFound", LucamErrorCode::LucamapiProcedureNotFound)
        .value("PropertyNotEnumeratable", LucamErrorCode::PropertyNotEnumeratable)
        .value("PropertyNotBufferable", LucamErrorCode::PropertyNotBufferable)
        .value("SingleTapImage", LucamErrorCode::SingleTapImage)
        .value("UnknownTapConfiguration", LucamErrorCode::UnknownTapConfiguration)
        .value("BufferTooSmall", LucamErrorCode::BufferTooSmall)
        .value("InCallbackOnly", LucamErrorCode::InCallbackOnly)
        .value("PropertyUnavailable", LucamErrorCode::PropertyUnavailable)
        .value("TimestampNotEnabled", LucamErrorCode::TimestampNotEnabled)
        .value("FramecounterNotEnabled", LucamErrorCode::FramecounterNotEnabled)
        .value("NoStatsWhenNotStreaming", LucamErrorCode::NoStatsWhenNotStreaming)
        .value("FrameCapturePending", LucamErrorCode::FrameCapturePending)
        .value("SequencingNotEnabled", LucamErrorCode::SequencingNotEnabled)
        .value("FeatureNotSequencable", LucamErrorCode::FeatureNotSequencable)
        .value("SequencingUnknownFeatureType", LucamErrorCode::SequencingUnknownFeatureType)
        .value("SequencingIndexOutOfSequence", LucamErrorCode::SequencingIndexOutOfSequence)
        .value("SequencingBadFrameNumber", LucamErrorCode::SequencingBadFrameNumber)
        .value("InformationNotAvailable", LucamErrorCode::InformationNotAvailable)
        .value("SequencingBadSetting", LucamErrorCode::SequencingBadSetting)
        .value("AutoFocusNeverStarted", LucamErrorCode::AutoFocusNeverStarted)
        .value("AutoFocusNotRunning", LucamErrorCode::AutoFocusNotRunning)
        .value("CameraNotOpenable", LucamErrorCode::CameraNotOpenable)
        .value("CameraNotSupported", LucamErrorCode::CameraNotSupported)
        .value("MmapFailed", LucamErrorCode::MmapFailed)
        .value("NotWhileStreaming", LucamErrorCode::NotWhileStreaming)
        .value("NoStreamingRights", LucamErrorCode::NoStreamingRights)
        .value("CameraInitializationError", LucamErrorCode::CameraInitializationError)
        .value("CannotVerifyPixelFormat", LucamErrorCode::CannotVerifyPixelFormat)
        .value("CannotVerifyStartPosition", LucamErrorCode::CannotVerifyStartPosition)
        .value("OsError", LucamErrorCode::OsError)
        .value("BufferNotAvailable", LucamErrorCode::BufferNotAvailable)
        .value("QueuingFailed", LucamErrorCode::QueuingFailed)
        .export_values();

    py::enum_<LucamVideoStreamingMode>(m, "VideoStreamingMode")
        .value("StopStreaming", LucamVideoStreamingMode::StopStreaming)
        .value("StartStreaming", LucamVideoStreamingMode::StartStreaming)
        .value("StartDisplay", LucamVideoStreamingMode::StartDisplay)
        .value("PauseStream", LucamVideoStreamingMode::PauseStream)
        .value("StartRGBStreaming", LucamVideoStreamingMode::StartRGBStreaming)
        .export_values();

    py::enum_<LucamPixelFormat>(m, "PixelFormat")
        .value("Depth8Bits", LucamPixelFormat::Depth8Bits)
        .value("Depth16Bits", LucamPixelFormat::Depth16Bits)
        .value("Depth24Bits", LucamPixelFormat::Depth24Bits)
        .value("Depth32Bits", LucamPixelFormat::Depth32Bits)
        .value("Depth48Bits", LucamPixelFormat::Depth48Bits)
        .value("Count", LucamPixelFormat::Count)
        .value("Filter", LucamPixelFormat::Filter)
#ifdef __linux__
        .value("Depth10BitsPacked", LucamPixelFormat::Depth10BitsPacked)
#endif
        .value("Depth12BitsPacked", LucamPixelFormat::Depth12BitsPacked)
        .export_values();

    py::enum_<LucamProperties>(m, "Properties")
        .value("PropBrightness", LucamProperties::PropBrightness)
        .value("PropContrast", LucamProperties::PropContrast)
        .value("PropHue", LucamProperties::PropHue)
        .value("PropSaturation", LucamProperties::PropSaturation)
        .value("PropExposure", LucamProperties::PropExposure)
        .value("PropIris", LucamProperties::PropIris)
        .value("PropFocus", LucamProperties::PropFocus)
        .value("PropGain", LucamProperties::PropGain)
        .value("PropGainRed", LucamProperties::PropGainRed)
        .value("PropGainBlue", LucamProperties::PropGainBlue)
        .value("PropGainGreen1", LucamProperties::PropGainGreen1)
        .value("PropGainGreen2", LucamProperties::PropGainGreen2)
        .export_values();
        
    py::class_<LUCAM_VERSION>(m, "LUCAM_VERSION")
        .def(py::init<>())
        .def_readwrite("firmware", &LUCAM_VERSION::firmware)
        .def_readwrite("fpga", &LUCAM_VERSION::fpga)
        .def_readwrite("api", &LUCAM_VERSION::api)
        .def_readwrite("driver", &LUCAM_VERSION::driver)
        .def_readwrite("serialnumber", &LUCAM_VERSION::serialnumber)         
        .def_readwrite("cameraid", &LUCAM_VERSION::cameraid);

    py::class_<LUCAM_FRAME_FORMAT>(m, "FrameFormat")
        .def(py::init<>())
        .def_readwrite("xOffset", &LUCAM_FRAME_FORMAT::xOffset)
        .def_readwrite("yOffset", &LUCAM_FRAME_FORMAT::yOffset)
        .def_readwrite("width", &LUCAM_FRAME_FORMAT::width)
        .def_readwrite("height", &LUCAM_FRAME_FORMAT::height)
        .def_readwrite("pixel_format", &LUCAM_FRAME_FORMAT::pixelFormat)
        .def_readwrite("binningX", &LUCAM_FRAME_FORMAT::binningX)
        .def_readwrite("flagsX", &LUCAM_FRAME_FORMAT::flagsX)
        .def_readwrite("binningY", &LUCAM_FRAME_FORMAT::binningY)
        .def_readwrite("flagsY", &LUCAM_FRAME_FORMAT::flagsY);

    py::class_<LUCAM_IMAGE_FORMAT>(m, "ImageFormat")
        .def(py::init<>())
        .def_readwrite("size", &LUCAM_IMAGE_FORMAT::Size)
        .def_readwrite("width", &LUCAM_IMAGE_FORMAT::Width)
        .def_readwrite("height", &LUCAM_IMAGE_FORMAT::Height)
        .def_readwrite("pixel_format", &LUCAM_IMAGE_FORMAT::PixelFormat)
        .def_readwrite("image_size", &LUCAM_IMAGE_FORMAT::ImageSize)
        .def_property("lucam_reserved",
                      [](const LUCAM_IMAGE_FORMAT &p) { return std::vector<ULONG>(std::begin(p.LucamReserved), std::end(p.LucamReserved)); },
                      [](LUCAM_IMAGE_FORMAT &p, const std::vector<ULONG> &v) {
                          if (v.size() != 8) {
                              throw std::runtime_error("LucamReserved must have 8 elements");
                          }
                          std::copy_n(v.begin(), 8, std::begin(p.LucamReserved));
                      });

    py::class_<LUCAM_SNAPSHOT>(m, "LUCAM_SNAPSHOT")
        .def(py::init<>()) 
        .def_readwrite("exposure", &LUCAM_SNAPSHOT::exposure)
        .def_readwrite("gain", &LUCAM_SNAPSHOT::gain)
        .def_readwrite("gainRed", &LUCAM_SNAPSHOT::gainRed)
        .def_readwrite("gainBlue", &LUCAM_SNAPSHOT::gainBlue)
        .def_readwrite("gainGrn1", &LUCAM_SNAPSHOT::gainGrn1)
        .def_readwrite("gainGrn2", &LUCAM_SNAPSHOT::gainGrn2)
        .def_readwrite("gainMag", &LUCAM_SNAPSHOT::gainMag)
        .def_readwrite("gainCyan", &LUCAM_SNAPSHOT::gainCyan)
        .def_readwrite("gainYel1", &LUCAM_SNAPSHOT::gainYel1)
        .def_readwrite("gainYel2", &LUCAM_SNAPSHOT::gainYel2)
        .def_readwrite("strobeFlags", &LUCAM_SNAPSHOT::strobeFlags)
        .def_readwrite("useStrobe", &LUCAM_SNAPSHOT::useStrobe)
        .def_readwrite("strobeDelay", &LUCAM_SNAPSHOT::strobeDelay)
        .def_readwrite("useHwTrigger", &LUCAM_SNAPSHOT::useHwTrigger)
        .def_readwrite("timeout", &LUCAM_SNAPSHOT::timeout)
        .def_readwrite("format", &LUCAM_SNAPSHOT::format)
        .def_readwrite("shutterType", &LUCAM_SNAPSHOT::shutterType)
        .def_readwrite("exposureDelay", &LUCAM_SNAPSHOT::exposureDelay)
        .def_readwrite("bufferlastframe", &LUCAM_SNAPSHOT::bufferlastframe);

    m.def("NumCameras", &LucamNumCameras, "Gets the number of connected cameras");
    m.def("EnumCameras", [](ULONG camNum) {
        std::vector<LUCAM_VERSION> versions(camNum);
        LONG result = LucamEnumCameras(versions.data(), camNum);
        if (result < 0) {
            throw std::runtime_error("Failed to enumerate cameras");
        }
        py::list py_versions;
        for (const auto& version : versions) {
            py_versions.append(version);
        }
        return py_versions;
    }, py::arg("camNum"), "Enumerate the list of available cameras");

    m.def("CameraOpen", &LucamCameraOpen, "Open the camera connection");
    m.def("CameraClose", &LucamCameraClose, "Close the camera connection");
    m.def("CameraReset", &LucamCameraReset, "Reset the camera connection");

    m.def("GetLastError", &LucamGetLastError, "Get the last error from the SDK");
    m.def("GetLastErrorForCamera", &LucamGetLastErrorForCamera, "Get the last error from the camera");

    m.def("SetFormat", [](HANDLE hCamera, const LUCAM_FRAME_FORMAT& format, FLOAT frameRate) {
        return LucamSetFormat(hCamera, const_cast<LUCAM_FRAME_FORMAT *>(&format), frameRate) == TRUE;
    }, "Set the camera format and frame rate");

    m.def("GetFormat", [](HANDLE hCamera) {
        FLOAT frameRate;
        LUCAM_FRAME_FORMAT format;

        if (LucamGetFormat(hCamera, &format, &frameRate)) {
            return py::make_tuple(format, frameRate);
        }
        else {
            throw py::value_error("Unable to get camera format");
        }
    }, "Get the current camera format and frame rate");

    m.def("GetProperty", [](HANDLE hCamera, ULONG propertyId) {
        FLOAT value;
        LONG flags;
        if (LucamGetProperty(hCamera, propertyId, &value, &flags)) {
            return py::make_tuple(value, flags);
        } else {
            return py::make_tuple(0.0f, 0L);
        }
    }, "Get a property value and flags from a camera");

    m.def("SetProperty", [](HANDLE hCamera, ULONG propertyId, FLOAT value, ULONG flags) {
        return LucamSetProperty(hCamera, propertyId, value, flags) == TRUE;
    }, "Set a property value with flags to a camera");

    m.def("GetVideoImageFormat", [](HANDLE hCamera) {
        LUCAM_IMAGE_FORMAT imageFormat;
        imageFormat.Size = sizeof(LUCAM_IMAGE_FORMAT);
        if (!LucamGetVideoImageFormat(hCamera, &imageFormat)) {
            throw std::runtime_error("Failed to get video image format");
        }
        return imageFormat;
    }, "Get the current image format for videos");

    m.def("GetStillImageFormat", [](HANDLE hCamera) {
        LUCAM_IMAGE_FORMAT imageFormat;
        imageFormat.Size = sizeof(LUCAM_IMAGE_FORMAT);
        if (!LucamGetStillImageFormat(hCamera, &imageFormat)) {
            throw std::runtime_error("Failed to get still image format");
        }
        return imageFormat;
    }, "Get the current image format for still images");

    m.def("StreamVideoControl", [](HANDLE hCamera, LucamVideoStreamingMode controlType) {
        if (!LucamStreamVideoControl(hCamera, static_cast<ULONG>(controlType), NULL)) {
            throw std::runtime_error("Failed to change video streaming control");
        }
    }, "Control streaming of video from the camera");

    m.def("TakeVideo", [](HANDLE hCamera, ULONG numFrames, ULONG frameSize) {
        py::array_t<BYTE> frameBuffer(frameSize * numFrames); // Python managed
        if (!LucamTakeVideo(hCamera, numFrames, frameBuffer.mutable_data())) {
            throw std::runtime_error("Failed to take video frame");
        }
        return py::make_tuple(frameBuffer, numFrames);
    }, "Capture a sequence of video frames into a buffer");

    m.def("EnableFastFrames", [](HANDLE hCamera, const LUCAM_SNAPSHOT &settings){
        if (!LucamEnableFastFrames(hCamera, const_cast<LUCAM_SNAPSHOT *>(&settings))) {
            throw std::runtime_error("Failed to enable fast frames");
        }
    }, "Enable fast frames mode");

    m.def("DisableFastFrames", [](HANDLE hCamera) {
        if (!LucamDisableFastFrames(hCamera)) {
            throw std::runtime_error("Failed to disable fast frames");
        }
    }, "Disable fast frame mode");

    m.def("TakeFastFrame", [](HANDLE hCamera, ULONG frameSize) {
        py::array_t<BYTE> frameBuffer(frameSize); // Python managed
        if (!LucamTakeFastFrame(hCamera, frameBuffer.mutable_data())) {
            throw std::runtime_error("Failed to take fast frame");
        }
        return frameBuffer;
    }, "Take a single fast frame");

    m.def("TakeSnapshot", [](HANDLE hCamera, const LUCAM_SNAPSHOT &settings, ULONG frameSize) {
        py::array_t<BYTE> frameBuffer(frameSize); // Python managed

        if (!LucamTakeSnapshot(hCamera, const_cast<LUCAM_SNAPSHOT *>(&settings), frameBuffer.mutable_data())) {
            throw std::runtime_error("Failed to take snapshot");
        }
        return frameBuffer;
    }, "Take a snapshot from the camera");

}  
