//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDRCoreDataService;

@interface _TtC6Tinder24RecommendationsViewModel : NSObject
{
    // Error parsing type: , name: dataService.storage
    // Error parsing type: , name: source
    // Error parsing type: , name: recommendationsView
    // Error parsing type: , name: recommendationsObserver.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (long long)startIndexFor:(double)arg1;
- (id)recommendationAt:(long long)arg1;
- (long long)numberOfRecommendations;
- (void)startObserving;
@property(nonatomic, readonly) long long source; // @synthesize source;
@property(nonatomic, retain) TNDRCoreDataService *dataService;

@end

