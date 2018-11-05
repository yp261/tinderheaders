//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTJSONObjectBase.h"

#import "SPTPartialObject-Protocol.h"
#import "SPTTrackProvider-Protocol.h"

@class NSArray, NSString, NSURL, SPTPartialAlbum;

@interface SPTPartialTrack : SPTJSONObjectBase <SPTPartialObject, SPTTrackProvider>
{
    _Bool _flaggedExplicit;
    _Bool _isPlayable;
    _Bool _hasPlayable;
    NSString *_identifier;
    NSString *_name;
    NSURL *_playableUri;
    NSURL *_sharingURL;
    double _duration;
    NSArray *_artists;
    long long _discNumber;
    NSArray *_availableTerritories;
    NSURL *_previewURL;
    long long _trackNumber;
    SPTPartialAlbum *_album;
    NSURL *_uri;
}

+ (id)partialTrackFromDecodedJSON:(id)arg1 error:(id *)arg2;
+ (void)load;
@property(copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) SPTPartialAlbum *album; // @synthesize album=_album;
@property(nonatomic) long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(copy, nonatomic) NSArray *availableTerritories; // @synthesize availableTerritories=_availableTerritories;
@property(nonatomic) _Bool hasPlayable; // @synthesize hasPlayable=_hasPlayable;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) _Bool flaggedExplicit; // @synthesize flaggedExplicit=_flaggedExplicit;
@property(nonatomic) long long discNumber; // @synthesize discNumber=_discNumber;
@property(copy, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(copy, nonatomic) NSURL *playableUri; // @synthesize playableUri=_playableUri;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tracksForPlayback;
- (id)initWithDecodedJSONObject:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

