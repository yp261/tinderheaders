//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDRCoreDataService, TNDRUser;

@interface TNDRCurrentUserObserver : NSObject
{
    // Error parsing type: , name: dataService.storage
    // Error parsing type: , name: onEvent
    // Error parsing type: , name: observer
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)stopObserving;
- (void)startObserving;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) TNDRUser *user;
@property(nonatomic, retain) TNDRCoreDataService *dataService;

@end

