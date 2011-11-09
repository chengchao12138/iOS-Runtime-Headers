/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKScrubberDataSource>, UIImageView, <EKScrubberDelegate>, NSMutableArray, EKScrubberBubble, EKScrubberThumbView, NSTimer, UIColor;

@interface EKScrubber : UIControl  {
    <EKScrubberDataSource> *_dataSource;
    <EKScrubberDelegate> *_delegate;
    NSMutableArray *_sections;
    UIColor *_textColor;
    UIImageView *_leftArrow;
    UIImageView *_rightArrow;
    UIImageView *_scrubberWellView;
    EKScrubberThumbView *_thumbView;
    EKScrubberBubble *_bubbleView;
    BOOL _usingCustomWidth;
    unsigned int _selectedSection;
    int _sectionToSelect;
    NSTimer *_scrollingTimer;
    NSMutableArray *_animatingSectionsToRemove;
    BOOL _usingTimerAcceleration;
    BOOL _timerGoingInThePast;
    BOOL _shouldScroll;
    BOOL _dragged;
}

@property(retain) <EKScrubberDataSource> * dataSource;
@property(retain) <EKScrubberDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned int)selectedSection;
- (void)setBackgroundImage:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (id)closestViewForXCoordinate:(float)arg1;
- (void)setRightArrowImage:(id)arg1;
- (void)setLeftArrowImage:(id)arg1;
- (void)setThumbBackgroundImage:(id)arg1;
- (void)selectSection:(int)arg1 animated:(BOOL)arg2;
- (void)slideAnimationFinished;
- (void)offsetViewX:(id)arg1 byAmount:(float)arg2;
- (void)scrollTimerFired:(id)arg1;
- (void)centerTouchOnSection:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)startScrollTimer:(double)arg1;
- (void)showBubbleAtXPosition:(float)arg1 withText:(id)arg2 animate:(BOOL)arg3;
- (int)partForXCoordinate:(float)arg1;
- (void)bubbleSlidingAnimationFinished;
- (void)shrinkBubbleDown;
- (void)moveBubbleToPoint:(struct CGPoint { float x1; float x2; })arg1 withText:(id)arg2 animate:(BOOL)arg3;
- (id)bubbleView;
- (void)hideBubble;
- (void)centerTouchOnPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutSections:(id)arg1;
- (id)viewForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })wellContentBounds;
- (void)rightArrowTapped;
- (void)leftArrowTapped;
- (void)slideToSection:(int)arg1 showBubble:(BOOL)arg2;
- (unsigned int)sectionForXCoordinate:(float)arg1;
- (void)moveThumbViewToSection:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)jumpToSection:(int)arg1;
- (void)generateSections;
- (void)cancelTimers;
- (void)dealloc;

@end