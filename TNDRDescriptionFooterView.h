//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UILabel;

@interface TNDRDescriptionFooterView : UITableViewHeaderFooterView
{
    NSString *_descriptionText;
    UILabel *_descriptionLabel;
    double _labelHeight;
}

@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void).cxx_destruct;
- (double)requiredHeight;
- (void)setDescriptionTextColor:(id)arg1;
- (void)setup;
- (id)initWithReuseIdentifier:(id)arg1;

@end
