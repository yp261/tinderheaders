//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDRCurrentUser, UIViewController;

@interface _TtC6Tinder35AddProfilePhotoFromCameraInteractor : NSObject
{
    // Error parsing type: , name: currentUser.storage
    // Error parsing type: , name: isMainPhoto
    // Error parsing type: , name: completion
    // Error parsing type: , name: viewController
    // Error parsing type: , name: delegate
    // Error parsing type: , name: photoAccessManager.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)didRequestToAddPhotoWithIsMainPhoto:(_Bool)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, retain) UIViewController *viewController; // @synthesize viewController;
@property(nonatomic, copy) CDUnknownBlockType completion; // @synthesize completion;
@property(nonatomic) _Bool isMainPhoto; // @synthesize isMainPhoto;
@property(nonatomic, retain) TNDRCurrentUser *currentUser;

@end

