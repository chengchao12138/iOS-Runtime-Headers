/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMembersController;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
    ABMembersController *_membersController;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    int _rightButtonBehavior;
    BOOL _shouldHandleExternalChangeOnPersonViewControllers;
    BOOL _showsRefreshButton;
}

@property(readonly) BOOL allowsCancel;
@property(readonly) BOOL allowsCardEditing;
@property(readonly) BOOL shouldShowGroups;


- (void)setAddressBook:(void*)arg1;
- (void)loadState;
- (id)model;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)defaultPNGName;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)applicationDidResume;
- (void)didReceiveMemoryWarning;
- (void)applicationWillSuspend;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (BOOL)isNavigationButtonEnabled:(int)arg1;
- (BOOL)newContactViewControllerCompleted:(id)arg1 withNewPerson:(void*)arg2;
- (void)personWasDeleted;
- (void)nameUpdatedForPerson:(void*)arg1;
- (void)linksUpdatedForPerson:(void*)arg1;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3;
- (BOOL)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(BOOL)arg2 forPerson:(void*)arg3;
- (void)membersController:(id)arg1 needsTitleUpdate:(id)arg2;
- (void)membersController:(id)arg1 needsTitleViewUpdate:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)localizedTitleForGroupWrapper:(id)arg1;
- (void)_applicationEnteringBackground;
- (void)startRefreshingAccount;
- (void)cancelRefreshingAccount;
- (void)refreshEverythingNow;
- (void)addPerson:(id)arg1;
- (void)updateRefreshButton;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (id)membersController;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 selectAndScrollToPerson:(BOOL)arg4;
- (void)resetInsertionData;
- (void)updateNavigationButtonsInSearchMode:(BOOL)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)handleExternalChangeOnPersonViewControllers;
- (void)_applicationEnteringForeground;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2 selectAndScrollToPerson:(BOOL)arg3;
- (BOOL)shouldShowGroups;
- (BOOL)allowsCardEditing;
- (BOOL)allowsCancel;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1;
- (int)abViewControllerType;
- (void)cancelSearching:(id)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)membersControllerWillStartSearching:(id)arg1;
- (void)membersControllerWillEndSearching:(id)arg1;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2;
- (void)personWasSelected:(void*)arg1;
- (BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)modelDatabaseChange:(id)arg1;

@end