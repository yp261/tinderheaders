//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPKTracker, TNDRAnalyticsTracker, TNDRProfileClient;

@interface _TtC6Tinder13SchoolContext : NSObject
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: analyticsTracker.storage
    // Error parsing type: , name: spkTracker.storage
    // Error parsing type: , name: profileClient.storage
    // Error parsing type: , name: previousSchool
    // Error parsing type: , name: school
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (_Bool)shouldAllowFreeformText;
- (void)refreshViewModel;
- (void)presentSchoolEditingViewControllerFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showError;
- (void)saveSchoolWith:(id)arg1;
- (id)initWith:(id)arg1;
@property(nonatomic, copy) NSString *school; // @synthesize school;
@property(nonatomic, readonly) NSString *savedSchool;
@property(nonatomic, copy) NSString *previousSchool; // @synthesize previousSchool;
@property(nonatomic, retain) TNDRProfileClient *profileClient;
@property(nonatomic, retain) SPKTracker *spkTracker;
@property(nonatomic, retain) TNDRAnalyticsTracker *analyticsTracker;

@end

