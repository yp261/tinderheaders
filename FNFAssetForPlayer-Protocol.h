//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSError, NSString;

@protocol FNFAssetForPlayer
@property(readonly, nonatomic) CDStruct_1b6d18a9 minBufferTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxBufferTime;
@property(readonly, nonatomic) long long status;
- (_Bool)decompressedFramebuffer;
- (NSString *)debugDetails;
- (struct CGAffineTransform)preferredTransform;
- (CDStruct_1b6d18a9)timeAfterSeek;
- (void)playbackStarted;
- (void)playbackPauseRequested;
- (_Bool)resetAssetToBeginningIfNeeded;
- (_Bool)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldBufferVideoAsSoonAsPossible;
- (_Bool)shouldRestartAfterStalling;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(void (^)(void))arg1;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)advanceFrameForTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (void)addErrorToLog:(NSError *)arg1 shouldStopPlayback:(_Bool)arg2;
- (_Bool)containsTrack:(long long)arg1;
- (CDStruct_1b6d18a9)duration;
- (NSDictionary *)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
@end
