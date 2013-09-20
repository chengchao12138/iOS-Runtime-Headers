/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKChallenge, NSArray, NSString;

@interface GKHostedChallengeIssueController : GKHostedViewController {
    GKChallenge *_challenge;
    id _completionHandler;
    NSString *_defaultMessage;
    id _dismissCompletionHandler;
    BOOL _forcePicker;
    NSArray *_playerIDs;
}

@property(retain) GKChallenge * challenge;
@property(copy) id completionHandler;
@property(copy) NSString * defaultMessage;
@property(copy) id dismissCompletionHandler;
@property BOOL forcePicker;
@property(retain) NSArray * playerIDs;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;
+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3;
+ (id)presentationQueue;

- (id)_remote;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)challenge;
- (id)completionHandler;
- (void)dealloc;
- (id)defaultMessage;
- (id)dismissCompletionHandler;
- (void)doneWithPlayers:(id)arg1 message:(id)arg2;
- (BOOL)forcePicker;
- (id)hostSideViewControllerClassName;
- (id)initWithChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;
- (id)playerIDs;
- (id)serviceSideViewControllerClassName;
- (void)setChallenge:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDefaultMessage:(id)arg1;
- (void)setDismissCompletionHandler:(id)arg1;
- (void)setForcePicker:(BOOL)arg1;
- (void)setPlayerIDs:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;

@end