//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDREnvironmentHelper, TNDRHTTPClient;
@protocol TNDRSMSValidationClientDelegate;

@interface TNDRSMSValidationClient : NSObject
{
    id <TNDRSMSValidationClientDelegate> _delegate;
}

@property(nonatomic) __weak id <TNDRSMSValidationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)validateCode:(id)arg1;
- (void)retrieveCodeForPhoneNumber:(id)arg1;
@property(readonly, nonatomic) TNDRHTTPClient *currentHTTPClient;
@property(readonly, nonatomic) TNDREnvironmentHelper *environmentHelper;

@end
