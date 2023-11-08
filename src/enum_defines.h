#include "api/include/ludefines.h"

// Video Streaming Modes
enum LucamVideoStreamingMode {
    StopStreaming = STOP_STREAMING,     // 0
    StartStreaming = START_STREAMING,   // 1
    StartDisplay = START_DISPLAY,       // 2
    PauseStream = PAUSE_STREAM,         // 3
    StartRGBStreaming = START_RGBSTREAM // 6
};

// Pixel Formats
enum LucamPixelFormat {
    Depth8Bits = LUCAM_PF_8 ,                  // 0
    Depth16Bits = LUCAM_PF_16,                 // 1
    Depth24Bits = LUCAM_PF_24,                 // 2
    Depth32Bits = LUCAM_PF_32,                 // 6
    Depth48Bits = LUCAM_PF_48,                 // 7
    Count = LUCAM_PF_COUNT,                    // 4
    Filter = LUCAM_PF_FILTER,                  // 5
    Depth10BitsPacked = LUCAM_PF_10_PACKED,    // 10
    Depth12BitsPacked = LUCAM_PF_12_PACKED     // 12
};

// Properties
enum LucamProperties {
    PropBrightness = LUCAM_PROP_BRIGHTNESS,     // 0
    PropContrast = LUCAM_PROP_CONTRAST,         // 1
    PropHue = LUCAM_PROP_HUE,                   // 2
    PropSaturation = LUCAM_PROP_SATURATION,     // 3
    PropGamma = LUCAM_PROP_GAMMA,               // 5
    PropExposure = LUCAM_PROP_EXPOSURE,         // 20
    PropIris = LUCAM_PROP_IRIS,                 // 21
    PropFocus = LUCAM_PROP_FOCUS,               // 22
    PropGain = LUCAM_PROP_GAIN,                 // 40
    PropGainRed = LUCAM_PROP_GAIN_RED,          // 41
    PropGainBlue = LUCAM_PROP_GAIN_BLUE,        // 42
    PropGainGreen1 = LUCAM_PROP_GAIN_GREEN1,    // 43
    PropGainGreen2 = LUCAM_PROP_GAIN_GREEN2     // 44
};
