//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UIButton, UILabel;

@interface CTHotelListMoreViewCell : CTCustomeGroupTableViewCell
{
    UILabel *lbleftTitle;
    UIButton *btSearchMore;
    UIButton *btSearchMoreBack;
    id <CTHotelListMoreViewDelegate> moreHotelDelegate;
}

@property(nonatomic) __weak id <CTHotelListMoreViewDelegate> moreHotelDelegate; // @synthesize moreHotelDelegate;
- (void).cxx_destruct;
- (void)searchNoMoreHotel:(id)arg1;
- (void)searchMoreHotel:(id)arg1;
- (void)customUIByfilterModel:(id)arg1;

@end
