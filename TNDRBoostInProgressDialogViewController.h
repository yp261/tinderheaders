//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRBoostDialogBaseViewController.h"

@class CADisplayLink;

@interface TNDRBoostInProgressDialogViewController : TNDRBoostDialogBaseViewController
{
    CADisplayLink *_displayLink;
}

+ (_Bool)showsGradientBackground;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (void)dismiss:(id)arg1;
- (void)setupBoostButtonAnimation;
- (void)tinderPlusButtonTapped;
- (void)setupFooterView;
- (void)updateCountdown:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)countdownTextForTimeRemaining:(double)arg1;
- (double)timeIntervalRemaining;
- (_Bool)optimisationEnabled;
- (id)currentUser;
- (id)topTitle;

@end

