//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNDRNotification, TNDRNotificationWindow;

@protocol TNDRNotificationWindowDelegate <NSObject>
- (void)didTapNotificationWindow:(TNDRNotificationWindow *)arg1 notification:(TNDRNotification *)arg2;
- (_Bool)notificationWindow:(TNDRNotificationWindow *)arg1 shouldAllowInteractionForNotification:(TNDRNotification *)arg2;
- (_Bool)notificationWindow:(TNDRNotificationWindow *)arg1 shouldShowNotification:(TNDRNotification *)arg2;
@end

