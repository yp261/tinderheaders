//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRThemeSongView;

@protocol TNDRThemeSongViewDelegate <NSObject>
- (void)themeSongViewDidSelectStopPlaying:(TNDRThemeSongView *)arg1;
- (void)themeSongViewDidSelectStartPlaying:(TNDRThemeSongView *)arg1;
- (void)themeSongViewDidSelectOpenInSpotify:(TNDRThemeSongView *)arg1;
@end
