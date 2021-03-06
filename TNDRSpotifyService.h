//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TNDRMusicPlayerProtocol-Protocol.h"

@class AVAudioSession, AVPlayer, AVPlayerItem, FBKVOController, NSString, NSURL;
@protocol TNDRSpotifyServiceDelegate;

@interface TNDRSpotifyService : NSObject <TNDRMusicPlayerProtocol>
{
    _Bool _startedPlaying;
    _Bool _playing;
    id <TNDRSpotifyServiceDelegate> _delegate;
    AVPlayer *_previewPlayer;
    AVPlayerItem *_playerItem;
    double _totalTrackTime;
    double _elapsedTrackTime;
    FBKVOController *_KVOController;
    NSURL *_previewURL;
    id _timeObserver;
}

@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double elapsedTrackTime; // @synthesize elapsedTrackTime=_elapsedTrackTime;
@property(nonatomic) double totalTrackTime; // @synthesize totalTrackTime=_totalTrackTime;
@property(nonatomic, getter=hasStartedPlaying) _Bool startedPlaying; // @synthesize startedPlaying=_startedPlaying;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *previewPlayer; // @synthesize previewPlayer=_previewPlayer;
@property __weak id <TNDRSpotifyServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)donePlaying:(id)arg1;
- (void)stop:(id)arg1;
- (void)dealloc;
- (void)updateProgressWithProgressValue:(double)arg1;
- (void)prepareToUpdateProgressWithPlayerItem:(id)arg1;
- (void)stopTrack;
- (void)playTrackWithURL:(id)arg1;
- (void)setup;
- (id)init;
@property(readonly, nonatomic) AVAudioSession *audioSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

