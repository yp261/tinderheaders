//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _TtC6Tinder10ChatBridge;

@protocol _TtP6Tinder24ChatBridgingPeekDelegate_
- (void)chatBridge:(_TtC6Tinder10ChatBridge *)arg1 didRequestToMarkMatchAsReadWithID:(NSString *)arg2;
- (void)chatBridge:(_TtC6Tinder10ChatBridge *)arg1 didRequestToMessageMatchWithID:(NSString *)arg2;
- (void)chatBridge:(_TtC6Tinder10ChatBridge *)arg1 didRequestToUnmatchMatchWithID:(NSString *)arg2;
- (void)chatBridge:(_TtC6Tinder10ChatBridge *)arg1 didRequestToReportMatchWithID:(NSString *)arg2;
@end
