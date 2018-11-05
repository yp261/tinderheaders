//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FNFTimeLoadedDelegate;

@interface FNFBufferSizeDecider : NSObject
{
    double _fetchBufferSizeInSeconds;
    double _fetchMultiplier;
    double _unstallMultiplier;
    double _unstallBufferSizeInSeconds;
    double _startPlayingUnstallBufferSize;
    double _stallBufferSizeInSeconds;
    id <FNFTimeLoadedDelegate> _delegate;
    NSArray *_loadedTimeRanges;
    double _firstFetchSizeInSeconds;
    CDStruct_1b6d18a9 _playbackTime;
    CDStruct_1b6d18a9 _timeAfterSeek;
}

@property(readonly, nonatomic) double firstFetchSizeInSeconds; // @synthesize firstFetchSizeInSeconds=_firstFetchSizeInSeconds;
@property(nonatomic) CDStruct_1b6d18a9 timeAfterSeek; // @synthesize timeAfterSeek=_timeAfterSeek;
@property(nonatomic) CDStruct_1b6d18a9 playbackTime; // @synthesize playbackTime=_playbackTime;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(nonatomic) __weak id <FNFTimeLoadedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_updateTimeLoaded:(CDStruct_1b6d18a9)arg1 fullyLoaded:(_Bool)arg2;
- (_Bool)hasLoadedTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)addFetchBufferToTime:(CDStruct_1b6d18a9)arg1;
- (void)resetPlaybackTimeAndTimeLoaded;
- (float)timeToLoadInSeconds;
- (_Bool)shouldFetch;
- (_Bool)shouldUnstall;
- (_Bool)shouldStall;
- (_Bool)updateTimeLoadedWithLoadedVideoTime:(CDStruct_1b6d18a9)arg1 videoFullyDownloaded:(_Bool)arg2 loadedAudioTime:(CDStruct_1b6d18a9)arg3 audioFullyDownloaded:(_Bool)arg4;
- (_Bool)updateTimeLoadedWithLoadedVideoTime:(CDStruct_1b6d18a9)arg1 videoFullyDownloaded:(_Bool)arg2;
- (void)requestTimeLoadedUpdate;
- (float)timeLoadedInSeconds;
- (CDStruct_1b6d18a9)timeLoaded;
- (id)description;
- (id)initWithFirstFetchSizeInSeconds:(double)arg1 fetchBufferSizeInSeconds:(double)arg2 fetchBufferMultiplier:(double)arg3 unstallBufferMultiplier:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 startPlayingUnstallBufferSizeInSeconds:(double)arg6 stallBufferSizeInSeconds:(double)arg7;

@end

