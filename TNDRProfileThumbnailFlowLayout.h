//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface TNDRProfileThumbnailFlowLayout : UICollectionViewFlowLayout
{
}

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)columnForItem:(long long)arg1;
- (long long)rowForItem:(long long)arg1;
- (long long)pageForItem:(long long)arg1;
- (struct CGSize)pageSize;
- (long long)pageCount;
- (long long)pageItemCount;
- (double)pageMarginY;
- (double)pageMarginX;
- (long long)columnCount;
- (long long)rowCount;
- (unsigned long long)itemCount;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
@property(readonly) _Bool isRightToLeftUI;

@end

