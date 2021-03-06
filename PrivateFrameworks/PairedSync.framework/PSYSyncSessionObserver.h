/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncSessionObserver : NSObject <PSYSyncSessionObserverInterface> {
    NSXPCConnection *_connection;
    PSYSyncSession *_currentSyncSession;
    <PSYSyncSessionObserverDelegate> *_delegate;
    PSYSyncSessionObserverExportedObject *_exportedObject;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldCheckinAfterInvalidationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYSyncSessionObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_checkin:(BOOL)arg1;
- (void)_connectionInvalidated;
- (void)_handleDaemonStarted;
- (void)_queue_invalidateSyncSession:(id)arg1;
- (void)_queue_loadConnectionIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (oneway void)invalidateSyncSession:(id)arg1;
- (id)providerWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startObservingSyncSessionsWithCompletion:(id /* block */)arg1;
- (oneway void)syncSessionWillStart:(id)arg1;
- (oneway void)updateSyncSession:(id)arg1;

@end
