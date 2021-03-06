//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMDjRadioDetailTrailInnerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIImageView, UILabel;

@interface NMDjRadioDetailTrailCell : UITableViewCell <NMDjRadioDetailTrailInnerViewDelegate>
{
    UIImageView *_line;
    UILabel *_titleLabel;
    NSMutableArray *_viewArray;
    NSArray *_dataArray;
    id <NMDjRadioDetailTrailCellDelegate> _delegate;
}

+ (double)heightForDataArray:(id)arg1;
@property(nonatomic) __weak id <NMDjRadioDetailTrailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)djRadioDetailTrailInnerViewClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

