//
//  Entry+CoreDataProperties.m
//  myTips
//
//  Created by Michael Kozy on 8/25/16.
//  Copyright © 2016 Michael Kozy. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Entry+CoreDataProperties.h"

@implementation Entry (CoreDataProperties)

@dynamic createdAt;
@dynamic notes;
@dynamic percentEarned;
@dynamic totalSales;
@dynamic totalTips;
@dynamic employers;

@end