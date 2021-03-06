//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMediaView, FBNativeAd, NSLayoutConstraint, UIButton, UIImageView, UILabel, _TtC6Tinder15FANAdHeaderView, _TtC6Tinder17FANAdActionButton, _TtC6Tinder17FANAdControlsView;

@interface _TtC6Tinder9FANAdView : UIView
{
    // Error parsing type: , name: mediaViewContainer
    // Error parsing type: , name: controlsView
    // Error parsing type: , name: videoOverlay
    // Error parsing type: , name: muteButton
    // Error parsing type: , name: watchAgainButton
    // Error parsing type: , name: viewMoreButton
    // Error parsing type: , name: headerViewContainer
    // Error parsing type: , name: headerView
    // Error parsing type: , name: headerViewTopConstraint
    // Error parsing type: , name: iconView
    // Error parsing type: , name: inlineActionButton
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: actionButton
    // Error parsing type: , name: eventDelegate
    // Error parsing type: , name: _mediaView
    // Error parsing type: , name: ctaTimer
    // Error parsing type: , name: audioSessionCategory
    // Error parsing type: , name: isCTATimerEnabled
    // Error parsing type: , name: animated
    // Error parsing type: , name: nativeAd
    // Error parsing type: , name: presented
    // Error parsing type: , name: muted
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewTappedWithGesture:(id)arg1;
- (void)ctaTimerTicked;
- (void)muteButtonTapped:(id)arg1;
@property(nonatomic) _Bool muted; // @synthesize muted;
- (void)watchAgainButtonTapped:(id)arg1;
@property(nonatomic) _Bool presented; // @synthesize presented;
- (_Bool)toggleVideoPlayback;
@property(nonatomic, retain) FBNativeAd *nativeAd; // @synthesize nativeAd;
- (void)awakeFromNib;
- (void)dealloc;
@property(nonatomic) _Bool animated; // @synthesize animated;
@property(nonatomic) _Bool isCTATimerEnabled; // @synthesize isCTATimerEnabled;
@property(nonatomic, readonly) FBMediaView *mediaView;
@property(nonatomic) __weak _TtC6Tinder17FANAdActionButton *actionButton; // @synthesize actionButton;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic) __weak _TtC6Tinder17FANAdActionButton *inlineActionButton; // @synthesize inlineActionButton;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView;
@property(nonatomic) __weak NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint;
@property(nonatomic) __weak _TtC6Tinder15FANAdHeaderView *headerView; // @synthesize headerView;
@property(nonatomic) __weak UIView *headerViewContainer; // @synthesize headerViewContainer;
@property(nonatomic) __weak UIButton *viewMoreButton; // @synthesize viewMoreButton;
@property(nonatomic) __weak UIButton *watchAgainButton; // @synthesize watchAgainButton;
@property(nonatomic) __weak UIButton *muteButton; // @synthesize muteButton;
@property(nonatomic) __weak UIView *videoOverlay; // @synthesize videoOverlay;
@property(nonatomic) __weak _TtC6Tinder17FANAdControlsView *controlsView; // @synthesize controlsView;
@property(nonatomic) __weak UIView *mediaViewContainer; // @synthesize mediaViewContainer;

@end

