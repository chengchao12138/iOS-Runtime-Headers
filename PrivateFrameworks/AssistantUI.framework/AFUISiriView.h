/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriView : UIView <AFUISiriRemoteViewHosting, SBUIPasscodeLockViewDelegate, SiriUISiriStatusViewDelegate> {
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    _UIBackdropView *_backdropView;
    BOOL _backdropViewVisible;
    BOOL _carDisplaySnippetVisible;
    UIView *_carPlayGatekeeperBackdropView;
    BOOL _carPlayGatekeeperBackdropViewVisible;
    SiriUIConfiguration *_configuration;
    <AFUISiriViewDelegate> *_delegate;
    UIView *_dimmingAndLockContainer;
    UIView *_dimmingView;
    BOOL _disabled;
    BOOL _flamesViewDeferred;
    UIView *_foregroundView;
    int _frozenBackdropSnapshotOrientation;
    UIView *_frozenBackdropSnapshotView;
    SiriUIHelpButton *_helpButton;
    BOOL _inHideUnlockViewanimation;
    BOOL _inShowUnlockViewAnimation;
    BOOL _keepStatusViewHidden;
    UIView<SBUIPasscodeLockView> *_lockView;
    int _mode;
    UIView *_remoteContentView;
    SiriUIContentButton *_reportBugButton;
    int _siriSessionState;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
    UIView *_statusViewContainer;
    BOOL _statusViewHidden;
    unsigned int _unlockAttemptCount;
    id /* block */ _unlockCompletion;
}

@property (nonatomic) BOOL carDisplaySnippetVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL flamesViewDeferred;
@property (nonatomic, readonly) UIView *foregroundView;
@property (nonatomic) int frozenBackdropSnapshotOrientation;
@property (nonatomic, retain) UIView *frozenBackdropSnapshotView;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL keepStatusViewHidden;
@property (nonatomic) int mode;
@property (nonatomic, retain) UIView *remoteContentView;
@property (nonatomic) int siriSessionState;
@property (nonatomic) BOOL statusViewHidden;
@property (readonly) Class superclass;

+ (void)_animateView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fromYPosition:(float)arg3 toYPostion:(float)arg4 fade:(int)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_animateButtonsHidden:(BOOL)arg1;
- (void)_animateLockViewIsAnimatingIn:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_configureHelpButton;
- (void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg1;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(BOOL)arg2;
- (BOOL)_helpButtonIsVisible;
- (void)_helpButtonTapped:(id)arg1;
- (void)_hideLockViewWithResult:(int)arg1;
- (void)_hideLockViewWithResult:(int)arg1 hideCompletion:(id /* block */)arg2;
- (void)_layoutReportBugButton;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)arg1;
- (id)_lockViewBackgroundColor;
- (id)_lockViewLegibilityProvider;
- (void)_preferencesDidChange:(id)arg1;
- (BOOL)_reducesMotionEffects;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (BOOL)_shouldIndicateHoldToTalkMode;
- (BOOL)_showsReportBugButton;
- (void)_updateControlsAppearance;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (BOOL)carDisplaySnippetVisible;
- (void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dimBackdropSettings;
- (BOOL)disabled;
- (BOOL)flamesViewDeferred;
- (id)foregroundView;
- (int)frozenBackdropSnapshotOrientation;
- (id)frozenBackdropSnapshotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (BOOL)isCarPlayMode;
- (BOOL)keepStatusViewHidden;
- (void)layoutSubviews;
- (int)mode;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)pulseHelpButton;
- (id)remoteContentView;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)arg1;
- (void)setBackdropShouldRasterize:(BOOL)arg1;
- (void)setBackdropVisible:(BOOL)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setCarDisplaySnippetVisible:(BOOL)arg1;
- (void)setCarPlayGatekeeperBackdropVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setFlamesViewDeferred:(BOOL)arg1;
- (void)setFrozenBackdropSnapshotOrientation:(int)arg1;
- (void)setFrozenBackdropSnapshotView:(id)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setKeepStatusViewHidden:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setRemoteContentView:(id)arg1;
- (void)setShowAudioRoutePicker:(BOOL)arg1;
- (void)setSiriSessionState:(int)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 completion:(id /* block */)arg2;
- (void)siriDidActivateFromSource:(int)arg1;
- (int)siriSessionState;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (BOOL)statusViewHidden;
- (void)teardownStatusView;
- (void)updateForPercentageRevealed:(float)arg1;

@end
