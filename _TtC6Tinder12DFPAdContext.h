//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDRCurrentUser, TNDRGoogleDFPExperiment, TNDRLocationManager;

@interface _TtC6Tinder12DFPAdContext : NSObject
{
    // Error parsing type: , name: googleDFPExperiment.storage
    // Error parsing type: , name: currentUser.storage
    // Error parsing type: , name: analytics.storage
    // Error parsing type: , name: currentAd
    // Error parsing type: , name: adInteractor
    // Error parsing type: , name: locationManager.storage
    // Error parsing type: , name: fetchCompletion
    // Error parsing type: , name: currentBannerView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool enabled;
@property(nonatomic, retain) TNDRLocationManager *locationManager;
@property(nonatomic, retain) TNDRCurrentUser *currentUser;
@property(nonatomic, retain) TNDRGoogleDFPExperiment *googleDFPExperiment;

@end

