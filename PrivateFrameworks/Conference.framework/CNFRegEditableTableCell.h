/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell  {
    SEL _emptyStateSelector;
    id _textChangeObserver;
    BOOL _textFieldIsEmpty;
    BOOL _skipDelegateCallback;
    UIImage *_shadowImage;
    CNFRegShadowView *_shadowView;
    UIImage *_customCheckmarkImage;
    UIImage *_customCheckmarkImageSelected;
}

@property(retain) UIImage * customCheckmarkImageSelected;
@property(retain) UIImage * customCheckmarkImage;
@property(retain) CNFRegShadowView * shadowView;
@property(retain) UIImage * shadowImage;
@property BOOL skipDelegateCallback;


- (id)shadowImage;
- (void)setShadowImage:(id)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowView;
- (void)setTitle:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setCustomCheckmarkImageSelected:(id)arg1;
- (void)setCustomCheckmarkImage:(id)arg1;
- (void)setSkipDelegateCallback:(BOOL)arg1;
- (BOOL)skipDelegateCallback;
- (void)_updateTextFieldOffsetWithDict:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (BOOL)_textFieldIsCurrentlyEmpty;
- (void)notifyTextFieldEmptyStateChanged:(BOOL)arg1;
- (void)_handleTextChanged;
- (id)customCheckmarkImage;
- (id)customCheckmarkImageSelected;
- (void)_startListeningForTextChanges;
- (void)_stopListeningForTextChanges;

@end