//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class NSDictionary;
@protocol TNDRActionDialogViewControllerDelegate;

@interface _TtC6Tinder21CRMNotificationDialog : TNDRDialogViewController
{
    // Error parsing type: , name: titleText
    // Error parsing type: , name: detailText
    // Error parsing type: , name: actionText
    // Error parsing type: , name: cancelText
    // Error parsing type: , name: userImage
    // Error parsing type: , name: imageDimension
    // Error parsing type: , name: actionDelegate
    // Error parsing type: , name: titleTextAttributes.storage
    // Error parsing type: , name: detailTextAttributes.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setupFooter;
- (void)setupHeader;
- (void)viewDidLoad;
@property(nonatomic, copy) NSDictionary *detailTextAttributes;
@property(nonatomic, copy) NSDictionary *titleTextAttributes;
@property(nonatomic) __weak id <TNDRActionDialogViewControllerDelegate> actionDelegate; // @synthesize actionDelegate;

@end

