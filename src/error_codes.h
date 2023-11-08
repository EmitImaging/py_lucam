#include "api/include/lucamerr.h"

enum LucamErrorCode {
    NoError = LucamNoError,                                                // 0
    NoSuchIndex = LucamNoSuchIndex,                                        // 1
    SnapshotNotSupported = LucamSnapshotNotSupported,                      // 2
    InvalidPixelFormat = LucamInvalidPixelFormat,                          // 3
    SubsamplingZero = LucamSubsamplingZero,                                // 4
    Busy = LucamBusy,                                                      // 5
    FailedToSetSubsampling = LucamFailedToSetSubsampling,                  // 6
    FailedToSetStartPosition = LucamFailedToSetStartPosition,              // 7
    PixelFormatNotSupported = LucamPixelFormatNotSupported,                // 8
    InvalidFrameFormat = LucamInvalidFrameFormat,                          // 9
    PreparationFailed = LucamPreparationFailed,                            // 10
    CannotRun = LucamCannotRun,                                            // 11
    NoTriggerControl = LucamNoTriggerControl,                              // 12
    NoPin = LucamNoPin,                                                    // 13
    NotRunning = LucamNotRunning,                                          // 14
    TriggerFailed = LucamTriggerFailed,                                    // 15
    CannotSetupFrameFormat = LucamCannotSetupFrameFormat,                  // 16
    DirectShowInitError = LucamDirectShowInitError,                        // 17
    CameraNotFound = LucamCameraNotFound,                                  // 18
    Timeout = LucamTimeout,                                                // 19
    PropertyUnknown = LucamPropertyUnknown,                                // 20
    PropertyUnsupported = LucamPropertyUnsupported,                        // 21
    PropertyAccessFailed = LucamPropertyAccessFailed,                      // 22
    LucustomNotFound = LucamLucustomNotFound,                              // 23
    PreviewNotRunning = LucamPreviewNotRunning,                            // 24
    LutfNotLoaded = LucamLutfNotLoaded,                                    // 25
    DirectShowError = LucamDirectShowError,                                // 26
    NoMoreCallbacks = LucamNoMoreCallbacks,                                // 27
    UndeterminedFrameFormat = LucamUndeterminedFrameFormat,                // 28
    InvalidParameter = LucamInvalidParameter,                              // 29
    NotEnoughResources = LucamNotEnoughResources,                          // 30
    NoSuchConversion = LucamNoSuchConversion,                              // 31
    ParameterNotWithinBoundaries = LucamParameterNotWithinBoundaries,      // 32
    BadFileIo = LucamBadFileIo,                                            // 33
    GdiplusNotFound = LucamGdiplusNotFound,                                // 34
    GdiplusError = LucamGdiplusError,                                      // 35
    UnknownFormatType = LucamUnknownFormatType,                            // 36
    FailedCreateDisplay = LucamFailedCreateDisplay,                        // 37
    DpLibNotFound = LucamDpLibNotFound,                                    // 38
    DpCmdNotSupported = LucamDpCmdNotSupported,                            // 39
    DpCmdUnknown = LucamDpCmdUnknown,                                      // 40
    NotWhilePaused = LucamNotWhilePaused,                                  // 41
    CaptureFailed = LucamCaptureFailed,                                    // 42
    DpError = LucamDpError,                                                // 43
    NoSuchFrameRate = LucamNoSuchFrameRate,                                // 44
    InvalidTarget = LucamInvalidTarget,                                    // 45
    FrameTooDark = LucamFrameTooDark,                                      // 46
    KsPropertySetNotFound = LucamKsPropertySetNotFound,                    // 47
    Cancelled = LucamCancelled,                                            // 48
    KsControlNotSupported = LucamKsControlNotSupported,                    // 49
    EventNotSupported = LucamEventNotSupported,                            // 50
    NoPreview = LucamNoPreview,                                            // 51
    SetPositionFailed = LucamSetPositionFailed,                            // 52
    NoFrameRateList = LucamNoFrameRateList,                                // 53
    FrameRateInconsistent = LucamFrameRateInconsistent,                    // 54
    CameraNotConfiguredForCmd = LucamCameraNotConfiguredForCmd,            // 55
    GraphNotReady = LucamGraphNotReady,                                    // 56
    CallbackSetupError = LucamCallbackSetupError,                          // 57
    InvalidTriggerMode = LucamInvalidTriggerMode,                          // 58
    NotFound = LucamNotFound,                                              // 59
    PermanentBufferNotSupported = LucamPermanentBufferNotSupported,        // 60
    EepromWriteFailed = LucamEepromWriteFailed,                            // 61
    UnknownFileType = LucamUnknownFileType,                                // 62
    EventIdNotSupported = LucamEventIdNotSupported,                        // 63
    EepromCorrupted = LucamEepromCorrupted,                                // 64
    SectionTooBig = LucamSectionTooBig,                                    // 65
    FrameTooBright = LucamFrameTooBright,                                  // 66
    NoCorrectionMatrix = LucamNoCorrectionMatrix,                          // 67
    UnknownCameraModel = LucamUnknownCameraModel,                          // 68
    ApiTooOld = LucamApiTooOld,                                            // 69
    SaturationZero = LucamSaturationZero,                                  // 70
    AlreadyInitialised = LucamAlreadyInitialised,                          // 71
    SameInputAndOutputFile = LucamSameInputAndOutputFile,                  // 72
    FileConversionFailed = LucamFileConversionFailed,                      // 73
    FileAlreadyConverted = LucamFileAlreadyConverted,                      // 74
    PropertyPageNotSupported = LucamPropertyPageNotSupported,              // 75
    PropertyPageCreationFailed = LucamPropertyPageCreationFailed,          // 76
    DirectShowFilterNotInstalled = LucamDirectShowFilterNotInstalled,      // 77
    IndividualLutNotAvailable = LucamIndividualLutNotAvailable,            // 78
    UnexpectedError = LucamUnexpectedError,                                // 79
    StreamingStopped = LucamStreamingStopped,                              // 80
    MustBeInSwTriggerMode = LucamMustBeInSwTriggerMode,                    // 81
    TargetFlaky = LucamTargetFlaky,                                        // 82
    AutoLensUninitialized = LucamAutoLensUninitialized,                    // 83
    LensNotInstalled = LucamLensNotInstalled,                              // 84
    UnknownError = LucamUnknownError,                                      // 85
    FocusNoFeedbackError = LucamFocusNoFeedbackError,                      // 86
    LutfTooOld = LucamLutfTooOld,                                          // 87
    UnknownAviFormat = LucamUnknownAviFormat,                              // 88
    UnknownAviType = LucamUnknownAviType,                                  // 89
    InvalidAviConversion = LucamInvalidAviConversion,                      // 90
    SeekFailed = LucamSeekFailed,                                          // 91
    AviRunning = LucamAviRunning,                                          // 92
    CameraAlreadyOpened = LucamCameraAlreadyOpened,                        // 93
    NoSubsampledHighRes = LucamNoSubsampledHighRes,                        // 94
    OnlyOnMonochrome = LucamOnlyOnMonochrome,                              // 95
    No8bppTo48bpp = LucamNo8bppTo48bpp,                                    // 96
    Lut8Obsolete = LucamLut8Obsolete,                                      // 97
    FunctionNotSupported = LucamFunctionNotSupported,                      // 98
    RetryLimitReached = LucamRetryLimitReached,                            // 99
    LgDeviceError = LucamLgDeviceError,                                    // 100
    InvalidIpConfiguration = LucamInvalidIpConfiguration,                  // 101
    InvalidLicense = LucamInvalidLicense,                                  // 102
    NoSystemEnumerator = LucamNoSystemEnumerator,                          // 103
    BusEnumeratorNotInstalled = LucamBusEnumeratorNotInstalled,            // 104
    UnknownExternInterface = LucamUnknownExternInterface,                  // 105
    InterfaceDriverNotInstalled = LucamInterfaceDriverNotInstalled,        // 106
    CameraDriverNotInstalled = LucamCameraDriverNotInstalled,              // 107
    CameraDriverInstallInProgress = LucamCameraDriverInstallInProgress,    // 108
    LucamapiDotDllNotFound = LucamLucamapiDotDllNotFound,                  // 109
    LucamapiProcedureNotFound = LucamLucamapiProcedureNotFound,            // 110
    PropertyNotEnumeratable = LucamPropertyNotEnumeratable,                // 111
    PropertyNotBufferable = LucamPropertyNotBufferable,                    // 112
    SingleTapImage = LucamSingleTapImage,                                  // 113
    UnknownTapConfiguration = LucamUnknownTapConfiguration,                // 114
    BufferTooSmall = LucamBufferTooSmall,                                  // 115
    InCallbackOnly = LucamInCallbackOnly,                                  // 116
    PropertyUnavailable = LucamPropertyUnavailable,                        // 117
    TimestampNotEnabled = LucamTimestampNotEnabled,                        // 118
    FramecounterNotEnabled = LucamFramecounterNotEnabled,                  // 119
    NoStatsWhenNotStreaming = LucamNoStatsWhenNotStreaming,                // 120
    FrameCapturePending = LucamFrameCapturePending,                        // 121
    SequencingNotEnabled = LucamSequencingNotEnabled,                      // 122
    FeatureNotSequencable = LucamFeatureNotSequencable,                    // 123
    SequencingUnknownFeatureType = LucamSequencingUnknownFeatureType,      // 124
    SequencingIndexOutOfSequence = LucamSequencingIndexOutOfSequence,      // 125
    SequencingBadFrameNumber = LucamSequencingBadFrameNumber,              // 126
    InformationNotAvailable = LucamInformationNotAvailable,                // 127
    SequencingBadSetting = LucamSequencingBadSetting,                      // 128
    AutoFocusNeverStarted = LucamAutoFocusNeverStarted,                    // 129
    AutoFocusNotRunning = LucamAutoFocusNotRunning,                        // 130
    CameraNotOpenable = LucamCameraNotOpenable,                            // 1121
    CameraNotSupported = LucamCameraNotSupported,                          // 1122
    MmapFailed = LucamMmapFailed,                                          // 1123
    NotWhileStreaming = LucamNotWhileStreaming,                            // 1124
    NoStreamingRights = LucamNoStreamingRights,                            // 1125
    CameraInitializationError = LucamCameraInitializationError,            // 1126
    CannotVerifyPixelFormat = LucamCannotVerifyPixelFormat,                // 1127
    CannotVerifyStartPosition = LucamCannotVerifyStartPosition,            // 1128
    OsError = LucamOsError,                                                // 1129
    BufferNotAvailable = LucamBufferNotAvailable,                          // 1130
    QueuingFailed = LucamQueuingFailed,                                    // 1131
};