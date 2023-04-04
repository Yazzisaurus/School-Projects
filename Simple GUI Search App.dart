import 'package:flutter/material.dart';

class SearchScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Product Catalog Search'),
      ),
      body: Padding(
        padding: EdgeInsets.all(16.0),
        child: Column(
          children: [
            TextField(
              decoration: InputDecoration(
                hintText: 'Enter search keywords',
              ),
            ),
            SizedBox(height: 16.0),
            ElevatedButton(
              onPressed:(){
                //TODO: Implement search functionality
              },
              child: Text('Search'),
            ),
            SizedBox(height: 16.0),
            Expanded(
              child: Center(
                child: Text('No matching products'),
              ),
            ),
          ],
        ),
      ),
    );
  }
}```