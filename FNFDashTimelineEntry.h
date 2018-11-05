//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface FNFDashTimelineEntry : NSObject
{
    NSMutableDictionary *_urls;
    NSURL *_url;
    NSString *_selectedRepresentationId;
    CDStruct_e83c9415 _range;
}

@property(readonly, copy, nonatomic) NSString *selectedRepresentationId; // @synthesize selectedRepresentationId=_selectedRepresentationId;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) CDStruct_e83c9415 range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)availableRepresentations;
- (void)selectRepresentation:(id)arg1;
- (void)addUrl:(id)arg1 representation:(id)arg2;
- (id)initWithRange:(CDStruct_e83c9415)arg1;

@end

