//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TNDRAlertContext;

@interface TNDRAuthError : NSObject
{
    _Bool _isLogoutError;
    long long _httpCode;
    long long _internalErrorCode;
    NSString *_debugMessage;
}

@property(copy, nonatomic) NSString *debugMessage; // @synthesize debugMessage=_debugMessage;
@property(nonatomic) long long internalErrorCode; // @synthesize internalErrorCode=_internalErrorCode;
@property(nonatomic) long long httpCode; // @synthesize httpCode=_httpCode;
@property(nonatomic) _Bool isLogoutError; // @synthesize isLogoutError=_isLogoutError;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 andStatusCode:(long long)arg2;
@property(readonly, copy, nonatomic) NSString *errorMessage;
@property(readonly, copy, nonatomic) NSString *errorTitle;
@property(readonly, copy, nonatomic) NSString *errorAlertMessageWithTitle;
@property(readonly, nonatomic) _Bool shouldShowErrorCodeInMessage;
@property(readonly, copy, nonatomic) TNDRAlertContext *errorAlertContext;

@end

