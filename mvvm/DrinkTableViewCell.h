//
//  DrinkTableViewCell.h
//  mvvm
//
//  Created by Ricky Joudrey on 1/27/16.
//  Copyright © 2016 com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DrinkViewModel;
@interface DrinkTableViewCell : UITableViewCell
@property(nonatomic) DrinkViewModel *viewModel;
@end
