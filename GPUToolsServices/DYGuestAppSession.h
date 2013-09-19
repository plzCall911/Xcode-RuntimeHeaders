/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DYBreakpoint, DYCaptureSession, DYDevice, DYFuture, DYGuestApp, DYGuestAppControlStrategy, DYGuestAppLaunchStrategy, DYResourceStreamer, DYSymbolicator, DYTransport, DYTransportSource, NSDictionary, NSError, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface DYGuestAppSession : NSObject
{
    struct dispatch_queue_s *_masterQueue;
    struct dispatch_queue_s *_queue;
    struct dispatch_semaphore_s *_transactionSema;
    NSMutableArray *_launchEnvironmentMutators;
    NSMutableArray *_finalLaunchDictionaryMutators;
    DYTransportSource *_source;
    DYSymbolicator *_symbolicator;
    DYFuture *_symbolicatorFuture;
    NSMapTable *_observersMap;
    NSMapTable *_traceHandlersMap;
    NSMutableDictionary *_fbufStreamHeaders;
    struct dispatch_queue_s *_traceHandlingQueue;
    NSMutableDictionary *_overridesConfiguration;
    DYCaptureSession *_activeCaptureSession;
    unsigned int _captureSessionSerial;
    NSMutableArray *_displayLinkInfo;
    struct dy_timebase _appTimebase;
    unsigned int _transactionBits;
    BOOL _attemptedLaunch;
    BOOL _didTerminate;
    BOOL _interposeSemaphoreSignalSent;
    BOOL _disableAllInterposing;
    BOOL _disableLaunchTimeout;
    BOOL _remainSuspendedAfterLaunch;
    BOOL _running;
    BOOL _invalid;
    BOOL _breakOnGLErrors;
    BOOL _trapOnGLErrors;
    BOOL _includeBacktracesInTrace;
    BOOL _includeDriverEventsInTrace;
    BOOL _checkGLErrors;
    int _traceMode;
    DYGuestApp *_guestApp;
    DYDevice *_device;
    DYTransport *_transport;
    NSDictionary *_finalLaunchDictionary;
    NSError *_error;
    DYResourceStreamer *_resourceStreamer;
    DYBreakpoint *_currentBreakpoint;
    unsigned long long _profilingSendPeriod;
    unsigned long long _profilingFlags;
    NSDictionary *_hardwareCountersConfiguration;
    DYGuestAppLaunchStrategy *_launchStrategy;
    DYGuestAppControlStrategy *_controlStrategy;
}

+ (void)initialize;
@property(readonly, nonatomic) DYGuestAppControlStrategy *controlStrategy; // @synthesize controlStrategy=_controlStrategy;
@property(readonly, nonatomic) DYGuestAppLaunchStrategy *launchStrategy; // @synthesize launchStrategy=_launchStrategy;
@property(retain, nonatomic) NSDictionary *hardwareCountersConfiguration; // @synthesize hardwareCountersConfiguration=_hardwareCountersConfiguration;
@property(nonatomic) unsigned long long profilingFlags; // @synthesize profilingFlags=_profilingFlags;
@property(nonatomic) unsigned long long profilingSendPeriod; // @synthesize profilingSendPeriod=_profilingSendPeriod;
@property(nonatomic) BOOL checkGLErrors; // @synthesize checkGLErrors=_checkGLErrors;
@property(nonatomic) BOOL includeDriverEventsInTrace; // @synthesize includeDriverEventsInTrace=_includeDriverEventsInTrace;
@property(nonatomic) BOOL includeBacktracesInTrace; // @synthesize includeBacktracesInTrace=_includeBacktracesInTrace;
@property(nonatomic) int traceMode; // @synthesize traceMode=_traceMode;
@property(nonatomic) BOOL trapOnGLErrors; // @synthesize trapOnGLErrors=_trapOnGLErrors;
@property(nonatomic) BOOL breakOnGLErrors; // @synthesize breakOnGLErrors=_breakOnGLErrors;
@property(retain, nonatomic) DYBreakpoint *currentBreakpoint; // @synthesize currentBreakpoint=_currentBreakpoint;
@property(readonly, nonatomic) DYResourceStreamer *resourceStreamer; // @synthesize resourceStreamer=_resourceStreamer;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic) NSDictionary *finalLaunchDictionary; // @synthesize finalLaunchDictionary=_finalLaunchDictionary;
@property(nonatomic) BOOL remainSuspendedAfterLaunch; // @synthesize remainSuspendedAfterLaunch=_remainSuspendedAfterLaunch;
@property(nonatomic) BOOL disableLaunchTimeout; // @synthesize disableLaunchTimeout=_disableLaunchTimeout;
@property(nonatomic) BOOL disableAllInterposing; // @synthesize disableAllInterposing=_disableAllInterposing;
@property(readonly, nonatomic) DYTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) DYDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) DYGuestApp *guestApp; // @synthesize guestApp=_guestApp;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forOverride:(id)arg2;
@property(readonly, nonatomic) struct dy_timebase appTimebase; // @dynamic appTimebase;
@property(readonly, nonatomic) int currentBreakpointType; // @dynamic currentBreakpointType;
- (void)_sendAllConfigurations;
- (void)_sendBreakpointsConfiguration;
- (void)_sendOverridesConfiguration;
- (void)_sendTraceConfiguration;
- (void)_handleFstreamData:(id)arg1;
- (void)_handleGuestAppTermination:(id)arg1;
- (void)_handleTransportMessage:(id)arg1;
- (id)getDisplayLinkInfo;
- (id)updateResources:(id)arg1;
- (id)queryContextsInfo;
- (id)activateCaptureSession:(id)arg1;
- (id)prepareSymbolicator;
- (void)removeObserver:(id)arg1;
- (id)notifyOnQueue:(struct dispatch_queue_s *)arg1 handler:(id)arg2;
- (void)_postEvent:(int)arg1 info:(id)arg2;
- (void)removeTraceHandler:(id)arg1;
- (id)handleTraceOnQueue:(struct dispatch_queue_s *)arg1 handler:(id)arg2;
- (void)dispatchInTransaction:(id)arg1;
- (void)drainQueue;
- (void)invalidate;
- (void)_invalidate:(id)arg1;
- (void)unlockOpenGL;
- (void)lockOpenGL;
- (void)bringToForeground;
- (void)sendToBackground;
- (void)terminate;
- (void)resume;
@property(readonly, nonatomic) NSDictionary *finalLaunchEnvironment; // @dynamic finalLaunchEnvironment;
- (void)dispatchOnceRunning:(struct dispatch_queue_s *)arg1 block:(id)arg2;
- (id)launch;
- (void)_applyBuiltinEnvironmentMutation:(id)arg1;
- (id)_makeLaunchDictionary;
- (void)registerFinalLaunchDictionaryMutator:(id)arg1;
- (void)registerLaunchEnvironmentMutator:(id)arg1;
- (struct dispatch_queue_s *)createQueueTargettingPrimaryQueue;
- (struct dispatch_queue_s *)createQueueTargettingMasterQueue;
- (void)setTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)_initWithGuestApp:(id)arg1 transport:(id)arg2 device:(id)arg3 launchStrategyClass:(Class)arg4 controlStrategyClass:(Class)arg5;
- (id)init;

@end
