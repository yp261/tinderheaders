//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TNDRAgeGenderVerificationViewControllerDelegate-Protocol.h"

@class TNDRAgeGenderVerificationViewController, TNDRCurrentUser, TNDRNotificationsNavigationController, TNDRProfileClient;
@protocol TNDRVerifyAgeAndGenderInteractorDelegate;

@interface TNDRVerifyAgeAndGenderInteractor : NSObject <TNDRAgeGenderVerificationViewControllerDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: ageGenderVerificationViewController.storage
    // Error parsing type: , name: ageGenderVerificationNavController.storage
    // Error parsing type: , name: profileClient.storage
    // Error parsing type: , name: currentUser.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)ageAndGenderVerificationViewControllerDidComplete:(id)arg1;
- (void)checkAgeGenderWith:(id)arg1;
@property(nonatomic, retain) TNDRCurrentUser *currentUser;
@property(nonatomic, retain) TNDRProfileClient *profileClient;
@property(nonatomic, retain) TNDRNotificationsNavigationController *ageGenderVerificationNavController;
@property(nonatomic, retain) TNDRAgeGenderVerificationViewController *ageGenderVerificationViewController;
@property(nonatomic) __weak id <TNDRVerifyAgeAndGenderInteractorDelegate> delegate; // @synthesize delegate;

@end

