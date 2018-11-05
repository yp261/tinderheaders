//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MarqueeLabel, NSString, TNDRPausePlayView, UIButton, UIImageView, UILabel;
@protocol TNDRSpotifyCollectionViewCellDelegate;

@interface TNDRSpotifyCollectionViewCell : UICollectionViewCell
{
    double _progress;
    id <TNDRSpotifyCollectionViewCellDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_trackNameLabel;
    MarqueeLabel *_artistNameLabel;
    UIButton *_openInSpotifyButton;
    NSString *_artistName;
    NSString *_trackName;
    UIButton *_openInSpotifyTapArea;
    unsigned long long _state;
    TNDRPausePlayView *_pausePlay;
    unsigned long long _transition;
}

@property(nonatomic) unsigned long long transition; // @synthesize transition=_transition;
@property(retain, nonatomic) TNDRPausePlayView *pausePlay; // @synthesize pausePlay=_pausePlay;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIButton *openInSpotifyTapArea; // @synthesize openInSpotifyTapArea=_openInSpotifyTapArea;
@property(copy, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) UIButton *openInSpotifyButton; // @synthesize openInSpotifyButton=_openInSpotifyButton;
@property(retain, nonatomic) MarqueeLabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(retain, nonatomic) UILabel *trackNameLabel; // @synthesize trackNameLabel=_trackNameLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property __weak id <TNDRSpotifyCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopTrackLabelInfiniteScroll;
- (void)startTrackLabelInfiniteScrollIfPossible;
- (id)windUpSpinningAnimation;
- (id)infiniteSpinningAnimation;
- (id)cornerRadiusAnimationFrom:(double)arg1 toValue:(double)arg2;
- (void)handleOpenInSpotify:(id)arg1;
- (void)transitionToLoadingState:(_Bool)arg1;
- (void)transitionToStopStateAnimated:(_Bool)arg1;
- (void)transitionToPlayStateAnimated:(_Bool)arg1;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)image;
- (void)prepareForReuse;
- (void)setImageURL:(id)arg1 trackName:(id)arg2 artistName:(id)arg3;
- (void)layoutSubviews;
- (void)setupOpenInSpotifyTapping;
- (void)setupOpenInSpotifyButton;
- (void)setupArtistLabel;
- (void)setupTrackLabel;
- (void)setupPausePlayView;
- (void)setupImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

