//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, TNDRChatCell, TNDRSlackChatTextView, TTTAttributedLabelLink;

@protocol TNDRChatContentViewProtocol <NSObject>
@property(nonatomic) __weak TNDRChatCell *parentCell;
@property(nonatomic) _Bool showLikeOption;
@property(readonly, nonatomic) long long bottomAlignmentAttributeForAvatar;
@property(nonatomic) __weak TNDRSlackChatTextView *textView;
@property(retain, nonatomic) CALayer *mask;
- (TTTAttributedLabelLink *)urlForTouchPoint:(struct CGPoint)arg1;
- (void)prepareForReuse;
@end

