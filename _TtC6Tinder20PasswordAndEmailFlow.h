//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC6Tinder20PasswordAndEmailFlow : NSObject
{
    // Error parsing type: , name: collectPasswordViewController
    // Error parsing type: , name: collectEmailViewController
    // Error parsing type: , name: navigationController
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)updateEmailFlowWithNetworkError:(id)arg1;
- (void)updateEmailFlowWithAuthError:(id)arg1;
- (void)updatePasswordFlowWithNetworkError:(id)arg1;
- (void)updatePasswordFlowWithAuthError:(id)arg1;
- (void)dismiss;
- (void)startCollectingEmailWith:(id)arg1;
- (void)startCollectingPasswordWith:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

