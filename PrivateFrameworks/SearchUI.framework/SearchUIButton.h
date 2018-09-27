/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIButton : SKUIPlayButton {
    CALayer * _backgroundLayer;
    UIView * _containerView;
    UIImage * _overlayImage;
    bool  _smallSize;
    bool  _toggled;
    unsigned long long  _type;
}

@property (retain) CALayer *backgroundLayer;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIImage *overlayImage;
@property (nonatomic) bool smallSize;
@property (getter=isToggled, nonatomic) bool toggled;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)backgroundLayer;
- (float)buttonCornerRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)containerView;
- (void)didMoveToSuperview;
- (id)initWithStyle:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (bool)isToggled;
- (void)layoutSubviews;
- (id)overlayImage;
- (float)playButtonDefaultAlpha;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundLayer:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setSmallSize:(bool)arg1;
- (void)setToggled:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)smallSize;
- (unsigned long long)type;
- (void)updateWithType:(unsigned long long)arg1;

@end