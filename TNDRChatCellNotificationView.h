//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;
@protocol TNDRChatCellNotificationViewDelegate;

@interface TNDRChatCellNotificationView : UIView
{
    _Bool _showsError;
    _Bool _showsPending;
    _Bool _showsSent;
    id <TNDRChatCellNotificationViewDelegate> _delegate;
    UIImageView *_rightImageView;
    UIImage *_spinner;
    UIImage *_notDeliveredIcon;
    UILabel *_notificationMessage;
    NSMutableArray *_showsSentConstraints;
    NSMutableArray *_defaultConstraints;
}

@property(retain, nonatomic) NSMutableArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property(retain, nonatomic) NSMutableArray *showsSentConstraints; // @synthesize showsSentConstraints=_showsSentConstraints;
@property(retain, nonatomic) UILabel *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(retain, nonatomic) UIImage *notDeliveredIcon; // @synthesize notDeliveredIcon=_notDeliveredIcon;
@property(retain, nonatomic) UIImage *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(nonatomic) __weak id <TNDRChatCellNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsSent; // @synthesize showsSent=_showsSent;
@property(nonatomic) _Bool showsPending; // @synthesize showsPending=_showsPending;
@property(nonatomic) _Bool showsError; // @synthesize showsError=_showsError;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sentText;
@property(readonly, nonatomic) NSString *notDeliveredText;
- (void)setShowsSent:(_Bool)arg1 animatePath:(id)arg2;
- (void)setupConstraints;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

