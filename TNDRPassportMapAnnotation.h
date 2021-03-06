//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class CLLocation, MKMapItem, MKPlacemark, NSString;

@interface TNDRPassportMapAnnotation : NSObject <MKAnnotation>
{
    struct CLLocationCoordinate2D _coordinate;
    _Bool _receivedUpdatedInfo;
    MKPlacemark *_placemark;
    MKMapItem *_mapItem;
    CLLocation *_location;
    NSString *_name;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)annotationForLocation:(id)arg1;
+ (id)annotationForLocation:(id)arg1 name:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
+ (id)annotationForLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (id)annotationForLocation:(id)arg1 placemark:(id)arg2 mapItem:(id)arg3;
@property(nonatomic) _Bool receivedUpdatedInfo; // @synthesize receivedUpdatedInfo=_receivedUpdatedInfo;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, copy, nonatomic) MKPlacemark *placemark; // @synthesize placemark=_placemark;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *gotoLocation;
@property(readonly, copy, nonatomic) NSString *landmarkName;
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, copy, nonatomic) NSString *locationName;
@property(readonly, copy, nonatomic) NSString *placeName;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)requestLocationInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupTitles;
- (id)initForLocation:(id)arg1 name:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
- (id)initWithLocation:(id)arg1 placemark:(id)arg2 mapItem:(id)arg3;
- (id)initWithLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

