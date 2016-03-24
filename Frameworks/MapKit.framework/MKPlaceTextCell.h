/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTextCell : ABContactCell {
    NSLayoutConstraint *_bottomConstraint;
    UILabel *_label;
    NSString *_text;
    NSLayoutConstraint *_topConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)setBottomConstraint:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (id)text;
- (id)topConstraint;

@end