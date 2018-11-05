//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTJSONObjectBase.h"

#import "SPTPartialObject-Protocol.h"

@class NSArray, NSString, NSURL, SPTImage;

@interface SPTPartialAlbum : SPTJSONObjectBase <SPTPartialObject>
{
    NSString *_identifier;
    NSString *_name;
    NSURL *_uri;
    NSURL *_playableUri;
    NSURL *_sharingURL;
    NSArray *_covers;
    SPTImage *_smallestCover;
    SPTImage *_largestCover;
    unsigned long long _type;
    NSArray *_availableTerritories;
}

+ (id)partialAlbumFromDecodedJSON:(id)arg1 error:(id *)arg2;
+ (void)load;
@property(copy, nonatomic) NSArray *availableTerritories; // @synthesize availableTerritories=_availableTerritories;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) SPTImage *largestCover; // @synthesize largestCover=_largestCover;
@property(retain, nonatomic) SPTImage *smallestCover; // @synthesize smallestCover=_smallestCover;
@property(copy, nonatomic) NSArray *covers; // @synthesize covers=_covers;
@property(copy, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(copy, nonatomic) NSURL *playableUri; // @synthesize playableUri=_playableUri;
@property(copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithDecodedJSONObject:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
