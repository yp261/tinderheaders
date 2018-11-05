//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADSlot;

@protocol GADSlotAdEventDelegate <NSObject>

@optional
- (void)slotDidRecordClick:(GADSlot *)arg1;
- (void)slotDidRecordImpression:(GADSlot *)arg1;
- (void)slot:(GADSlot *)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (void)slotWillLeaveApplication:(GADSlot *)arg1;
- (void)slotDidDismissScreen:(GADSlot *)arg1;
- (void)slotWillDismissScreen:(GADSlot *)arg1;
- (void)slotWillPresentScreen:(GADSlot *)arg1;
@end

