//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TNDRCircularTrackPlayerView, UIButton, UILabel;
@protocol TNDRThemeSongViewDelegate;

@interface TNDRThemeSongView : UIView
{
    unsigned long long _state;
    id <TNDRThemeSongViewDelegate> _delegate;
    UIView *_topSeparator;
    TNDRCircularTrackPlayerView *_circularPlayer;
    UILabel *_titleLabel;
    UILabel *_trackLabel;
    UIButton *_artistButton;
    UILabel *_openInSpotifyLabel;
    UIButton *_openInSpotifyTappableArea;
    NSString *_artistName;
}

@property(retain) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) UIButton *openInSpotifyTappableArea; // @synthesize openInSpotifyTappableArea=_openInSpotifyTappableArea;
@property(retain, nonatomic) UILabel *openInSpotifyLabel; // @synthesize openInSpotifyLabel=_openInSpotifyLabel;
@property(retain, nonatomic) UIButton *artistButton; // @synthesize artistButton=_artistButton;
@property(retain, nonatomic) UILabel *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TNDRCircularTrackPlayerView *circularPlayer; // @synthesize circularPlayer=_circularPlayer;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(nonatomic) __weak id <TNDRThemeSongViewDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (struct CGSize)sizeForMaxWidth:(double)arg1 fontName:(id)arg2 fontSize:(double)arg3 text:(id)arg4;
- (void)relayout;
- (void)stopPlaying;
- (void)startPlaying;
- (void)handleOpenInSpotify:(id)arg1;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setPlayedPercent:(double)arg1;
- (void)setAlbumArtURL:(id)arg1;
- (void)setTrackName:(id)arg1 artistName:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

