//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

@class TNDRPassportMapViewCalloutView;

@interface TNDRPassportMapView : MKMapView
{
    TNDRPassportMapViewCalloutView *_calloutView;
}

@property(retain, nonatomic) TNDRPassportMapViewCalloutView *calloutView; // @synthesize calloutView=_calloutView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end

