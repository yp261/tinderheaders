//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TNDRSlackChatTextView;

@protocol TNDRChatMessagesViewModelDelegate <NSObject>
- (TNDRSlackChatTextView *)textViewForOverridingFirstResponder;
- (double)heightForSystemText:(NSString *)arg1;
- (double)heightForEmojiText:(NSString *)arg1;
- (double)heightForText:(NSString *)arg1 lastMessage:(_Bool)arg2 leftMessage:(_Bool)arg3;
- (void)removeRefreshHeader;
@end
