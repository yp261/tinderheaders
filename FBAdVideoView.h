//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdBlurredImageView, FBAdImage, FBAdVideoPlayButton, FBAdVideoPlayerAudioMeters, FBAdVideoPlayerView, FBAdVideoScrubber, FBAdViewabilityValidator, FBGradientView, NSMutableArray, NSString, NSURL, UILabel, UITapGestureRecognizer;
@protocol FBAdVideoViewDelegate, FNFAVPlayer, FNFAVPlayerItem;

@interface FBAdVideoView : UIView <FBAdViewabilityValidatorDelegate, FBAdUpdatableView>
{
    _Bool _muted;
    _Bool _autoplayEnabled;
    _Bool _inlineMode;
    _Bool _playPauseButtonEnabled;
    _Bool _scrubberEnabled;
    _Bool _tapEnabled;
    _Bool _isBeingScrubbed;
    _Bool _playbackSuspended;
    _Bool _playerIsPlaying;
    _Bool _playingBeforeScrubbed;
    _Bool _videoCurrentlyShownToUser;
    double _controlSizeMultiplier;
    id <FBAdVideoViewDelegate> _delegate;
    FBAdImage *_image;
    FBAdVideoPlayerView *_videoView;
    FBAdVideoPlayButton *_playPauseButton;
    FBAdVideoScrubber *_videoScrubber;
    UILabel *_timeRemainingLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <FNFAVPlayer> _player;
    id <FNFAVPlayerItem> _playerItem;
    CDUnknownBlockType _failureBlock;
    NSMutableArray *_observers;
    NSMutableArray *_timingObservers;
    double _duration;
    NSURL *_url;
    FBAdViewabilityValidator *_viewabilityValidator;
    FBGradientView *_gradientView;
    FBAdBlurredImageView *_imageView;
    FBAdVideoPlayerAudioMeters *_audioMetersView;
    CDStruct_1b6d18a9 _currentTime;
}

+ (id)dateFormatter;
@property(nonatomic) __weak FBAdVideoPlayerAudioMeters *audioMetersView; // @synthesize audioMetersView=_audioMetersView;
@property(nonatomic) __weak FBAdBlurredImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak FBGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) _Bool videoCurrentlyShownToUser; // @synthesize videoCurrentlyShownToUser=_videoCurrentlyShownToUser;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool playingBeforeScrubbed; // @synthesize playingBeforeScrubbed=_playingBeforeScrubbed;
@property(nonatomic) _Bool playerIsPlaying; // @synthesize playerIsPlaying=_playerIsPlaying;
@property(nonatomic) _Bool playbackSuspended; // @synthesize playbackSuspended=_playbackSuspended;
@property(nonatomic) _Bool isBeingScrubbed; // @synthesize isBeingScrubbed=_isBeingScrubbed;
@property(retain, nonatomic) NSMutableArray *timingObservers; // @synthesize timingObservers=_timingObservers;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(nonatomic) __weak id <FNFAVPlayerItem> playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) id <FNFAVPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(nonatomic) __weak FBAdVideoScrubber *videoScrubber; // @synthesize videoScrubber=_videoScrubber;
@property(nonatomic) __weak FBAdVideoPlayButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) __weak FBAdVideoPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) FBAdImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isTapEnabled) _Bool tapEnabled; // @synthesize tapEnabled=_tapEnabled;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled; // @synthesize scrubberEnabled=_scrubberEnabled;
@property(nonatomic, getter=isPlayPauseButtonEnabled) _Bool playPauseButtonEnabled; // @synthesize playPauseButtonEnabled=_playPauseButtonEnabled;
@property(nonatomic) _Bool inlineMode; // @synthesize inlineMode=_inlineMode;
@property(nonatomic) __weak id <FBAdVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double controlSizeMultiplier; // @synthesize controlSizeMultiplier=_controlSizeMultiplier;
@property(nonatomic, getter=isAutoplayEnabled) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
- (void).cxx_destruct;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)disableCoverImageIfNeeded;
- (void)enableCoverImageIfNeeded;
- (void)updateCoverImage;
- (void)setupCoverImage;
- (void)videoScrubberTouchComplete:(id)arg1;
- (void)videoScrubberTouchDown:(id)arg1;
- (void)videoScrubberChanged:(id)arg1;
- (void)videoScrubberStartScrub;
- (void)setCurrentTimeWithoutSeeking:(CDStruct_1b6d18a9)arg1;
- (void)tap:(id)arg1;
- (void)removeGestureRecognizers;
- (void)addGestureRecognizers;
- (void)dealloc;
- (id)remainingTimeLabelFromDate:(id)arg1 duration:(double)arg2;
- (void)removeAllTimingObservers;
- (void)addTimingObserver:(CDUnknownBlockType)arg1;
- (void)removeAllObservers;
- (void)addObserver:(id)arg1;
- (void)setupNotifications;
- (void)playMovieWithURL:(id)arg1 withFailure:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (void)startStopAction:(id)arg1;
- (_Bool)isPlaying;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(copy, nonatomic) NSString *videoGravity;
@property(readonly, nonatomic) struct CGSize videoSize;
- (void)updateView:(_Bool)arg1;
- (void)layoutSubviews;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

