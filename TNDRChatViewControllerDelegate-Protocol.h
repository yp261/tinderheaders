//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRMatch;

@protocol TNDRChatViewControllerDelegate <NSObject>
- (void)didTapChatCloseButton;
- (void)didBlockUser;

@optional
- (void)didRequestToMarkRead:(TNDRMatch *)arg1;
- (void)didRequestToMessageUser;
- (void)didRequestToUnmatch:(TNDRMatch *)arg1;
- (void)didRequestToReport:(TNDRMatch *)arg1;
@end
