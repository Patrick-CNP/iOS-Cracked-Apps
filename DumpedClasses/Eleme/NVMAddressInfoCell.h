//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class UILabel;

@interface NVMAddressInfoCell : NVMTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_addressLabel;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)configCellWithPOI:(id)arg1 keyword:(id)arg2;
- (void)loadSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

