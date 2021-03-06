//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNFDashRepresentationProperties, NSArray, NSMutableDictionary, NSString, NSURL;

@interface FNFDashPlaylistData : NSObject
{
    NSMutableDictionary *_segmentedInitUrls;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_encodedInitDatas;
    NSURL *_videoSegmentedInitUrl;
    NSURL *_audioSegmentedInitUrl;
    FNFDashRepresentationProperties *_videoProperties;
    FNFDashRepresentationProperties *_audioProperties;
    NSString *_videoEncodedInitData;
    NSString *_audioEndodedInitData;
    _Bool _isParsed;
    _Bool _containsAudioTrack;
    _Bool _expectsFutureUpdates;
    int _indexToForceFetchTo;
    int _audioFetchIndex;
    int _videoFetchIndex;
    long long _videoType;
    NSString *_representationId;
    NSString *_qualityLabel;
    NSString *_audioRepresentationId;
    NSString *_projection;
    NSString *_audioChannelConfiguration;
    NSArray *_timelineEntries;
    NSArray *_fragmentedUrls;
    NSArray *_fragmentedInitializationLengths;
    CDStruct_1b6d18a9 _playlistDuration;
}

@property(copy, nonatomic) NSArray *fragmentedInitializationLengths; // @synthesize fragmentedInitializationLengths=_fragmentedInitializationLengths;
@property(copy, nonatomic) NSArray *fragmentedUrls; // @synthesize fragmentedUrls=_fragmentedUrls;
@property(nonatomic) int videoFetchIndex; // @synthesize videoFetchIndex=_videoFetchIndex;
@property(nonatomic) int audioFetchIndex; // @synthesize audioFetchIndex=_audioFetchIndex;
@property(nonatomic) int indexToForceFetchTo; // @synthesize indexToForceFetchTo=_indexToForceFetchTo;
@property(nonatomic) _Bool expectsFutureUpdates; // @synthesize expectsFutureUpdates=_expectsFutureUpdates;
@property(copy, nonatomic) NSArray *timelineEntries; // @synthesize timelineEntries=_timelineEntries;
@property(copy, nonatomic) NSString *audioChannelConfiguration; // @synthesize audioChannelConfiguration=_audioChannelConfiguration;
@property(copy, nonatomic) NSString *projection; // @synthesize projection=_projection;
@property(copy, nonatomic) NSString *audioRepresentationId; // @synthesize audioRepresentationId=_audioRepresentationId;
@property(copy, nonatomic) NSString *qualityLabel; // @synthesize qualityLabel=_qualityLabel;
@property(copy, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) _Bool containsAudioTrack; // @synthesize containsAudioTrack=_containsAudioTrack;
@property(nonatomic) CDStruct_1b6d18a9 playlistDuration; // @synthesize playlistDuration=_playlistDuration;
@property(nonatomic) _Bool isParsed; // @synthesize isParsed=_isParsed;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSegmented;
@property(readonly, nonatomic) _Bool isLive;
@property(readonly, nonatomic) _Bool isFragmented;
- (id)encodedDataInitForRepresentation:(id)arg1 track:(long long)arg2;
- (void)addEncodedInitData:(id)arg1 representation:(id)arg2 track:(long long)arg3;
- (unsigned int)bitrateForRepresentation:(id)arg1 track:(long long)arg2;
- (void)addRepresentationProperties:(id)arg1 track:(long long)arg2;
- (id)segmentedInitUrlForRepresentation:(id)arg1 track:(long long)arg2;
- (void)addSegmentedInitUrl:(id)arg1 representation:(id)arg2 track:(long long)arg3;
- (id)init;

@end

