//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface GADLocation : NSObject <NSCopying>
{
    double _latitude;
    double _longitude;
    double _accuracy;
    double _timestamp;
    NSDictionary *_dictionaryRepresentation;
    NSString *_locationDescription;
}

@property(copy, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isPreciseLocation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocationDescription:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3;

@end

