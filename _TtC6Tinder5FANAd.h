//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBNativeAd, NSString, NSUUID, UIView;

@interface _TtC6Tinder5FANAd : NSObject
{
    // Error parsing type: , name: uuid
    // Error parsing type: , name: nativeAd
    // Error parsing type: , name: view.storage
    // Error parsing type: , name: delegate
    // Error parsing type: , name: eventDelegate
    // Error parsing type: , name: timeViewedTimer
    // Error parsing type: , name: presented
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithNativeAd:(id)arg1;
@property(nonatomic) _Bool presented; // @synthesize presented;
@property(nonatomic, readonly) long long timeViewed;
@property(nonatomic, readonly) double progress;
@property(nonatomic, retain) UIView *view;
@property(nonatomic, readonly) FBNativeAd *nativeAd; // @synthesize nativeAd;
@property(nonatomic, readonly) NSUUID *uuid; // @synthesize uuid;
@property(nonatomic, readonly) NSString *creativeID;

@end
